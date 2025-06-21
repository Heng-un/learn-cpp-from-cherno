#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	// 使用 explicit 关键字防止隐式类型转换
	explicit Entity(const std::string& name)
		: m_Name(name),m_Age(-1) {}

	explicit Entity(int age)
		: m_Name("Unknown"),m_Age(age){}
};

void PrintEntity(const Entity& entity)
{
	//Printing
}


int main()
{
	// 报错！因为 Entity(int) 是 explicit，不能自动从 int 转换为 Entity
	PrintEntity(22);
	// 正确,显式地构造了一个 Entity 对象
	PrintEntity(Entity("Cherno"));

	// 报错！因为 Entity(string) 是 explicit，不能进行隐式转换
	Entity a = "Cherno"; 
	// 如果没有explicit的话，会把char类型的cherno转成std::string，然后隐式传入Entity构造函数，生成对象



	// 报错！因为 Entity(int) 是 explicit，不能进行隐式转换
	Entity b = 22 ;
	std::cin.get();
}
