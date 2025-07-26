#include <iostream>
#include <string>

// 定义一个类模板，接受两个参数：类型 T 和整数 N
template <typename T, int N>
class Array
{
private:
	T m_Array[N];// 声明一个固定大小为 N 的数组，元素类型为 T
public:
	// 成员函数：返回数组的大小 N（为常量）
	int GetSize() const {return N;}
};

int main()
{
	// 创建一个 Array 实例，元素类型为 std::string，大小为 50
	Array<std::string, 50> array;
	// 输出数组的大小
	std::cout << array.GetSize() << std::endl;

	std::cin.get();
}
