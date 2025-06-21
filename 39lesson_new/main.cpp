#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }

};

int main()
{
	int a = 2;
	int* b = new int[50];

	Entity* e = new Entity(); //new不仅会分配内存还会调用构造函数
	Entity* e2 = (Entity*)malloc(sizeof(Entity)); //仅分配内存

	delete e;
	delete e2; //delete调用了c函数free(e),delete也同样会调用析构函数

	delete[] b; //如果用new[]分配了数组就用delete[]

	std::cin.get();
}
