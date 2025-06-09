#include <iostream>
#include <string>

class Entity
{
private:
	int m_X, m_Y;
	//mutable 表示即使在 const 函数中也可以修改这个成员变量
	mutable int var; 
public:
	// const 表示这是一个“常函数”，不能修改类中的普通成员变量（除了 mutable 修饰的）
	int GetX() const 
	{
		var = 2;
		return m_X;
	}

	int SetX(int x)
	{
		m_X = x;
	}
};

void PrintEntity(const Entity& e) //常对象只能调用常函数
{
	std::cout << e.GetX() << std::endl;
}

int main()
{
	Entity e;

	const int MAX_AGE = 90;// MAX_AGE 是一个不可修改的常量
	// 第一个 const：不能通过 a 修改值；第二个 const：a 本身不能指向别处
	const int* const a = new int;

	*a = 2;// ❌ 错误：不能修改 *a 的值，因为它是 const int*
	a = (int*)&MAX_AGE;// ❌ 错误：a 是指针常量，不能修改指向地址
	a = nullptr;// ❌ 错误：a 是 const 指针，不能重新赋值
	std::cout << *a << std::endl;

	std::cin.get();
	
}

//int const* = const int*
//const int* 常量指针，无法更改指针指向的内容,指针可以指向其他
//int* const 指针常量，可以改变指针指向的内容,但指针不能指向其他
