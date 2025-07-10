#include <iostream>
#include <string>
#include <vector>


//push_back无 reserve     6 次  构造 + 拷贝 + 扩容 
//push_back+reserve(3)    3 次  构造 + 拷贝      
//emplace_back+reserve(3) 0 次  原地构造，无拷贝 

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		:x(x), y(y), z(z)
	{

	}
	Vertex(const Vertex& vertex)
		:x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "copied!" << std::endl;
	}
};

int main()
{
	std::vector<Vertex> vertices;

	vertices.reserve(3);
	vertices.emplace_back(1,2,3 );
	vertices.emplace_back(4,5,6 );
	vertices.emplace_back(7,8,9 );
	std::cin.get();
}
