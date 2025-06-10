#include <iostream>
#include <string>

class Example
{
public:
	// 默认构造函数
	Example()
	{
		std::cout << "Created Entity!" << std::endl;
	}
	// 带参数构造函数
	Example(int x)
	{
		std::cout << "Created Entity with" << x << "!" << std::endl;
	}
};
class Entity
{
private:
	std::string m_Name;
	Example m_Example;
public:
	// 无参构造函数，使用初始化列表给 m_Example 初始化
	Entity()
		:m_Example(8)
	{
		m_Name = std::string("Unknown");
	}

	Entity(const std::string& name)
		:m_Name(name)
	{
	}
};
