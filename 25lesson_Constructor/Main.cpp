#include <iostream>

class Entity
{
public:
	float X, Y;

	//类自带一个构造函数，但是里面什么都没有，就和这一段代码一样
	Entity() 
	{
	}

	Entity(float x,float y)
	{
		X = x;
		Y = y;
	}

	void Print()
	{
		std::cout << X << "," << Y << std::endl;
	}
};

class Log
{
public:
	// 删除构造函数，禁止创建 Log 的对象（Log l 会报错）
	Log() = delete;

	static void Write()
	{

	}
};
int main()
{
	Log::Write();
	Log l;

	Entity e(10.0f,5.0f);
	e.Print();

	std::cin.get();
}
