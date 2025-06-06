#include <iostream>
#include <array>

//尽量使用array，更安全

//用new来分配的内存，可以一直存在直到你删除
class Entity
{
public:
	// 定义一个静态常量，用作数组的大小（推荐写法，方便统一管理）
	static const int exampleSize = 5;
	int example[exampleSize];
	
	// 定义一个 C++ 风格的数组（使用 std::array），大小固定为 5
	std::array <int, 5> another;

	Entity()
	{
		// 遍历数组 another 的大小
		for (int i = 0; i < another.size(); i++)
			example[i] = 2;
		// 这里只修改了 example 数组，另一个 another 数组没做处理
	}
};

int main()
{
	Entity e;


	std::cin.get();
}
