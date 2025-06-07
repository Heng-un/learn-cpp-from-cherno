#include <iostream>
#include <string>  //一定需要

void PrintString(const std::string& string) //引用防止复制 const防止被修改
{
	std::cout << string << std::endl; 
}

int main()
{
	std::string name = std::string("Cherno") + "hello!";
	PrintString(name);
	bool contains = name.find("no") != std::string::npos;  //寻找no，如果找到为true，找不到为false
	std::cout << name << std::endl;

	std::cin.get();
}
