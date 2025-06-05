#include <iostream>
#include <string>

// 定义一个接口类 Printable
class Printable
{
public:
	// 纯虚函数：所有继承 Printable 的类都必须实现这个函数
	virtual std::string GetClassName() = 0;
};

class Entity :public Printable
{
public:
	// 虚函数，可以被子类重写
	virtual std::string GetName() { return "Entity"; }

	// 实现 Printable 中的纯虚函数
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	// 构造函数，初始化玩家名字
	Player(const std::string& name) 
		: m_Name(name) {} 

	// 重写 Entity 的 GetName 函数，返回玩家名字
	std::string GetName() override { return m_Name; }

	// 重写 GetClassName，返回类名 "Player"
	std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

class A :public Printable
{
public:
	std::string GetClassName() override { return "A"; }
};

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	//PrintName(e);

	Player* p = new Player("Cherno");
	//PrintName(p);

	Print(e);
	Print(p);
	Print(new A()); //不要这么写，会内存泄露

	std::cin.get();
}
