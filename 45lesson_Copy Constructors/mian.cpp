#include <iostream>
#include <string>
#include <cstring>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		// 分配内存（+1 是为了 '\0'）
		memcpy(m_Buffer, string, m_Size);
		//把string的m_Size长度的字符串复制进m_Buffer
		m_Buffer[m_Size] = 0;
		// 手动加上结尾的 '\0' 
	}
	
	String(const String& other) //拷贝构造函数：实现深拷贝
		// 作用是：当用一个已有 String 对象初始化新对象时调用，确保两个对象有各自独立内存
		:m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer,other.m_Buffer,m_Size+1);
	}

	~String()
	{
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index)
		// 直接返回 m_Buffer 中对应索引的字符引用，支持像数组一样访问
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

void PrintString(String& string)
{
	std::cout << string << std::endl;
}

int main()
{
	String string = "Cherno";
	String second = string;

	second[2] = 'a';
	
	PrintString(string);
	PrintString(second);
	
	std::cin.get();
}
