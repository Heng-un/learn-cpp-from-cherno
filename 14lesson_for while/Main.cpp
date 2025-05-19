#include <iostream>
#include "Log.h"


int main()
{
	for (int i =0;i <5 ; i++)   // i が 0 から始まり、5 より小さい間ループを繰り返し、各ループごとに i を 1 増やす
	{
		Log("Hello World!");
	}

	Log("=====================================");

	int i = 0;
	while (i < 5)  // i が 5 より小さい間、ループを繰り返し、毎回 i を 1 増やす
	{
		Log("Hello World!");
		i++;
	}
	std::cin.get();
}
