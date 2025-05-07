#include <iostream>
#include "Mutiply.h"   //告诉编译器这里会定义Mutiply和MutiplyAndLog


int Mutiply(int a, int b)  //定义函数Mutiply，声明参数ab
{
	return a * b;    //返回a乘以b的结果
}

void MutiplyAndLog(int a, int b)  //定义函数MutiplyAndLog，声明参数ab
{
	int result = Mutiply(a, b);  //定义result变量= Mutiply(a, b)参照上文就是a*b的值
	std::cout << result << std::endl;
}
