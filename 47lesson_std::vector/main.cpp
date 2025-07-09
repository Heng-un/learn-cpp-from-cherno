#include <iostream>
#include <string>
#include <vector>

//vector存对象是把对象存在内存连续的一条直线上，因为vector本身也是一种数组，所以读取起来很方便，而存指针其实就是对象仍然存在不同的内存块中，而vector只是把指向这些对象的指针的地址按照数组保存


// 如果对象小、无需共享或多态，用 vector<对象>；如果需要多态、共享、或对象很大、频繁移动，用 vector<智能指针>（如 unique_ptr 或 shared_ptr）！
struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x<<"," << vertex.y<<"," << vertex.z;
	return stream;

}


void Function(const std::vector<Vertex>& vertices)
//一定要记得用引用&，避免复制
// const 保证函数内部不会修改传入的 vector 内容
{

}

int main()
{
	// 创建一个 vector，用于存储多个 Vertex 对象
	std::vector<Vertex> vertices;
	// 使用 push_back 添加两个顶点（临时构造 Vertex 对象）
	vertices.push_back({ 1,2,3 });
	vertices.push_back({ 4,5,6 });
	Function(vertices);

	for (int i = 0; i < vertices.size(); i++)
		std::cout << vertices[i] << std::endl;

	// vertices.begin() 是指向第一个元素的迭代器
	// 加 1 就是第二个元素
	vertices.erase(vertices.begin() + 1);

	for (Vertex& v : vertices)
		std::cout << v << std::endl;
	
	std::cin.get();
}
