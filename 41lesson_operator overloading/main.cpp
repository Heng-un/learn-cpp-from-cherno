#include <iostream>
#include <string>

struct Vector2
{
	float x, y;

	Vector2(float x,float y)
		:x(x),y(y){}

	// 普通函数 Add，用于向量相加
	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	// 重载 + 运算符，相当于调用 Add 方法
	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	// 普通函数 Multiply，用于向量逐元素相乘
	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}

	// 重载 * 运算符，相当于调用 Multiply 方法
	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}

	// 重载 == 运算符，判断两个向量是否完全相等
	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}

	// 重载 != 运算符，判断两个向量是否不相等
	bool operator!=(const Vector2& other) const
	{
		return !(*this ==other);
	}
};

// 重载 << 运算符，用于打印 Vector2 对象
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x <<"," << other.y;
	return stream;
}

int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result1 = position.Add(speed.Multiply(powerup));
	Vector2 result2 = position + speed * powerup;

	if (result1 == result2)
	{

	}

	std::cout << result2 << std::endl;

	std::cin.get();
}
