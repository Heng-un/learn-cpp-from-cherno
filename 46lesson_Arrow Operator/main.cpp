#include <iostream>
#include <string>


class Entity
{
private:
	int x;
public:
	// const 成员函数，说明不会修改成员变量
	void Print() const { std::cout << "Hello!" << std::endl; }
};
class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		: m_Obj(entity)
	{
	}

	~ScopedPtr()
	{
		delete m_Obj;
	}

	Entity* operator->()
	{
		return m_Obj;
	}

	const Entity* operator->() const
	{
		return m_Obj;
	}
};

struct Vector3
{
	float x, y, z;
};

int main()
{
	// 创建一个 ScopedPtr 智能指针对象，管理一个 Entity 实例
	// 注意：这里用 const 修饰，意味着只能调用 const 成员函数
	const ScopedPtr entity = new Entity();
	entity->Print();
	//entity->Print();  
	//==> entity.operator->()->Print();
	//==> (m_Obj)->Print();  // 在 operator->() 函数内部的语境中

	//(Vector3*)nullptr	构造一个 Vector3* 空指针（不指向任何真实内存）

	//->z	解引用空指针访问成员 z，语法上合法，但不真正访问内存

	//&((...)->z)	取 z 的地址，相对于起始地址偏移多少字节

	//(int) 强制类型转换	把地址转换为 int 型，就是偏移量
	int offset = (int)&((Vector3*)nullptr)->z;
	//"我假设 Vector3 对象在地址 0，
	//然后用->z 找到 z 成员，
	//最后& 取它的地址并转为 int，
	//得到的就是 z 相对结构体起点的偏移字节数。"
	std::cout << offset << std::endl;
	
	std::cin.get();
}
