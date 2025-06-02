#include <iostream>
#include <string>

class Entity
{
public:
	//`virtual` 关键字：表示这是一个虚函数，可以被子类 override（重写）
	virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity 
{
private:
	std::string m_Name;
public:
	Player(const std::string& name) //&引用，防止复制字符串
		: m_Name(name){}  //初始化列表，相当于出生就赋予姓名

	//override告诉编译器这是重写
	std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	//在堆上创建了一个 Entity 对象，并用指针 e 指向它的地址。
	Entity* e = new Entity();  
	PrintName(e);

	Player* p = new Player("Cherno");
	PrintName(p);

	std::cin.get();
}
