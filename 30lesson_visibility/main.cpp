#include <iostream>


class Entity
{
protected: //protected 子类可以访问 main函数不可以 private 友元可以访问
	int X, Y;

	void Print(){}
public:
	Entity()
	{
		X = 0;
		Print();
	}
};

class Player : public Entity
{
public:
	Player()
	{
		X = 2;
		Print();
	}

};

int main()
{
	Entity e;
	e.X = 2;  //无法运行
	e.Print();  //无法运行

	std::cin.get();
}
//要好好使用可见性
