#include <iostream>

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

};

class Player : public Entity //Player总是Entity的超集,父类是子类的子集
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	std::cout << sizeof(Entity) << std::endl; //8byte
	std::cout << sizeof(Player) << std::endl; //16byte 8+8
	Player Player;
	Player.Move(5, 5);
	Player.X = 2;

	std::cin.get();
}
