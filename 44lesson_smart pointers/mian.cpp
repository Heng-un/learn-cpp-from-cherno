#include <iostream>
#include <string>
#include <memory>

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
	void Print(){}
};


int main()
{
	{
		std::shared_ptr<Entity> e0;
		std::weak_ptr<Entity> e1;//weak指针，被shared指针分享地址，但是不计入引用计数，shared指针失效也会跟着失效
		{
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();//unique智能指针，唯一所有权的智能指针，当这个函数所在的作用域结束，实例和指针会消失

			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();//shared智能指针，会分配引用计数control block内存块，要所有被分享的指针失效之后才会释放内存资源

			e0 = sharedEntity;
			e1 = sharedEntity;
		}// 出了这个作用域：
	// unique_ptr 自动销毁
	// shared_ptr 引用计数为 1（只剩 e0）
	// weak_ptr（e1）仍指向 sharedEntity，但不会阻止释放

	}
	// 当 e0 离开作用域，引用计数变 0，sharedEntity 被释放
		// e1 自动变成 expired（过期指针）
	
	std::cin.get();
}
