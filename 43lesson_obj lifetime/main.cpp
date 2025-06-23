#include <iostream>
#include <string>


class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};

// 自定义的智能指针类，用来管理 Entity 对象的生命周期
class ScopedPtr
{
private:
	// 成员变量，指向堆上的 Entity 实例
	Entity* m_Ptr;
public:
	// 构造函数，接收一个 Entity 类型的指针作为参数
	ScopedPtr(Entity* ptr)
		:m_Ptr(ptr)
	{
	}

	~ScopedPtr()
	{
		// 删除堆上的 Entity 实例，防止内存泄漏
		delete m_Ptr;
		//m_Ptr = nullptr;    安全起见，置空指针
	}
};

int main()
{
	{
		// 在堆上创建一个 Entity 实例，返回指针传给 ScopedPtr 构造函数
		// 隐式转换：Entity* 被转换成 ScopedPtr 类型
		ScopedPtr e = new Entity();
		//ScopedPtr e(new Entity());更好，可读性更好也更标准
	}
	// 程序执行到此，ScopedPtr e 作用域结束，自动调用析构函数释放内存
	std::cin.get();
}
