#include <iostream>
#define LOG(x) std::cout << x << std::endl;  

class Player    //クラスの中にはデータとそのデータを処理する関数が含まれている
	              //コードをより簡潔にするためのもの
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

int main()
{
	Player player;
	player.Move(1,-1);

	std::cin.get();
}
