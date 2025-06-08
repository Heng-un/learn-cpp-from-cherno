#include <iostream>
#include <string>
#include <stdlib.h>


int main()
{
	// 使用字面量操作符"s"来构造 std::string 类型
	using namespace std::string_literals;
	std::string name5 = "Cherno"s+ "hello!";

	// R"(...)" 可以保留字符串中的格式，如换行、空格，不需要使用 \n 手动转义
	const char* example = R"(Line1
Line2
Line3
Line4)";
	
	// 普通的 C 字符串，可以手动换行
	const char* ex = "Line1\n"
		"Line2\n"
		"Line3\n";

	// 不同字符编码类型的字符串字面量
	const char* name = u8"Cherno";
	const wchar_t* name2 = L"Cherno";
	const char16_t* name3 = u"Cherno";
	const char32_t* name4 = U"Cherno";
	std::cin.get();
}

//char* p = "hello"; // p是一个指针，直接指向常量区，修改p【0】就是修改常量区的内容，这是不允许的。
//char p[] = "hello"; // 编译器在栈上创建一个字符串p，把"hello"从常量区复制到p，修改p【0】就相当于修改数组元素一样，是可以的。
