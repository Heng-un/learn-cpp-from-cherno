#include <iostream>
#include <string>

void PrintEntity(const Entity& e);


class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		// this 是一个指向当前对象的指针，用 *this 解引用后就是当前对象的引用
		this->x = x;
		this->y = y;

		// 将当前对象作为引用赋给一个同类型的引用变量 e
		Entity& e = *this;
		// 这行没有实际用途，只是演示了 this 的用法
		//大概可以理解为，在构造函数里面写*this的话，*this值得就是每一个实例的本身，就是每有一个新实例，新实例的*this指的都是自己本身，然后将自身的参数引用给entity类型的e，这个e其实是什么都行，在实例根本用不到，他只是需要有一个变量名

		// 把当前对象作为引用传给打印函数
		PrintEntity(*this);
	}

	int GetX() const
	{
		// 这也是将当前对象作为引用赋值给一个 const 引用
		const Entity& e = *this;
		return x;
	}
};

void PrintEntity(const Entity& e)
{
	//print
}

int main()
{

	std::cin.get();
}
