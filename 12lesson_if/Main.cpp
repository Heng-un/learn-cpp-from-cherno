#include <iostream>
#include "Log.h"


int main()
{
	const char* ptr = "Hello!";
	if (ptr)
		Log(ptr);
	else if (ptr == "Hello!") //if実行に失敗したら else ifを実行
		Log("Ptr is Hello!");
	else
	    Log("Ptr is Null");

	std::cin.get();
}
