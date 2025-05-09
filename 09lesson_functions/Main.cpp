#include <iostream>

int Multiply(int a, int b)  //定义函数Multiply
{
    return a * b;   //返回值
}

void MultiplyAndLog(int a, int b) //定义函数MultiplyAndLog
{
    int result = Multiply(a , b);  //定义变量result = Multiply(a , b)
    std::cout << result << std::endl;
}

int main()
{
    MultiplyAndLog(3, 2);
    MultiplyAndLog(8, 5);
    MultiplyAndLog(90, 42);
    std::cin.get();
}
