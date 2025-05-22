#include <iostream>
#define LOG(x) std::cout << x << std::endl;  

//参照はポインタの見た目を変えただけであり、ポインタのシンタックスシュガー（文法的な簡略化）です。
//参照は新しい変数ではなく、メモリを追加で使用しません。

void Increment(int* value)
{
	(*value)++;
}
void Increment2(int& value) //効果は同じですが、コードはより簡潔でシンプルです。
{
	value++;
}

int main()
{
	int a = 5;
	Increment(&a); //int* value = &a;
	LOG(a);
	Increment2(a);
	LOG(a);

	std::cin.get();
}
