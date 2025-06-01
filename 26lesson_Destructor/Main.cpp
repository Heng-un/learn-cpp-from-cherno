#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Constructed Entity!" << std::endl;
	}

	          //evil twin
	~Entity() //析构函数，实例销毁时运行
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
	void Print()
	{
		std::cout << X << "," << Y << std::endl;
	}
};

void Functions()
{
	Entity e;
	e.Print();
}
int main()
{
	Functions();
	std::cin.get();
}
