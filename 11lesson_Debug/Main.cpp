#include <iostream>
#include "Log.h"


int main()
{
	int a = 8;　　//ブレークポイント放置、watchwindow観察変数a、memory1window &a入力、変数アドレス観察
	a++;　　　　　//変数a+1
	const char* string = "Hello";  //定数ポインタ

	for (int i = 0; i < 5; i++)    //ループ
	{
		const char C = string[i];    //定数文字変数Ｃ＝string[0-4/H-o]
		std::cout << C << std::endl;
	}

	Log("HelloWorld!");
	std::cin.get();
}
