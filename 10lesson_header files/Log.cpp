#include <iostream>
#include "Log.h"   //引入头文件Log.h 告诉编译器将在这里实现声明的函数


void InitLog()
{
	Log("Initializing Log");
}

void Log(const char* message)   //const char*是只读的字符串
{
	std::cout << message << std::endl;
}
