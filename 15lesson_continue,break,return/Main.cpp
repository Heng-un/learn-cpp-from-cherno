#include <iostream>
#include "Log.h"


int main()
{
	for (int i = 0; i <  5; i++)
	{
		if (i < 2)
			continue;  // i が 0 または 1 の場合、このループの残りのコードをスキップして、次のループに進む
		else if (i == 3) 
			break;  // i が 3 の場合、ループを完全に終了する
		Log("Hello World！");
		std::cout << i << std::endl;
	}
	return 0;   // プログラムを正常に終了する
	std::cin.get();  //dead code
}
