#include <iostream>

struct Entity
{
	static int x, y;

	static void Print() // 静的関数：静的メンバーのみアクセス可能。非静的メンバーは使えない。
	{
		std::cout << x << "," << y << std::endl;
	}
};
// 静的変数の実体をクラス外で定義（これは必須）
int Entity::x;  
int Entity::y;

int main()
{
	Entity e;
	Entity::x = 2;
	Entity::y = 3;

	Entity e1;
	Entity::x = 5;
	Entity::y = 8;

	e.Print(); // 出力：5,8
	e1.Print(); // 出力：5,8
	std::cin.get();
}
