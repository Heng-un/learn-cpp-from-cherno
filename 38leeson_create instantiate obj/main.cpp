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

//如果对象太大，或者想要显示的控制对象的生存期，就在堆上创建
//在栈上更快而且自动化
int main()
{
	
	Entity* e; //声明了指针e，野指针
	{   //创建了一个代码块，作用域仅限于花括号内部。

		//堆分配，这个对象在作用域结束后不会自动销毁
		Entity* entity = new Entity("Cherno");

		//把entity的地址赋值给外部的指针e
		//e现在也指向entity
		e = entity;
		std::cout << entity->GetName() << std::endl;
		
	}

	std::cin.get();
	//由于 entity 是 new 出来的，一定要手动 delete e;，否则会发生内存泄漏
	delete e;
}
