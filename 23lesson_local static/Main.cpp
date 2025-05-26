#include <iostream>

class Singleton// 定义一个 Singleton（单例）类。
{
public:
	// 获取 Singleton 实例的静态方法
	// 程序中只能通过这个方法访问实例
	static Singleton& Get() 
	{ 
		// 定义一个局部静态变量。它只在第一次调用时创建，之后都会使用同一个实例。
		static Singleton instance;
		return instance;
	}
	// 示例成员函数，这里没有实际功能，只是为了展示可以调用
	void Hello(){}
};



int main()
{
	Singleton::Get().Hello();
	std::cin.get();
}
