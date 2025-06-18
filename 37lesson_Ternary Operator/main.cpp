#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
	if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;
	//尽量不要在三元操作符嵌套，虽然会让代码简洁但是难以阅读
	// 解释：
	// 如果 s_Level > 5 且 s_Level < 100 为真，
	//    则判断 s_Level > 10 是否为真
	//       如果为真，s_Speed = 10；
	//       否则，s_Speed = 15；
	// 否则（s_Level <= 5 或 s_Level >= 100），s_Speed = 5；
	s_Speed = s_Level > 5 && s_Level < 100 ? s_Level > 10 ? 10 : 15 : 5; 

	std::string rank = s_Level > 10 ? "Master" : "Beginner";

	//技术层面上讲很可能会慢（The Cherno说的），但开销很小可以忽略（ChantGPT说的）。
	std::string otherrank;
	if (s_Level > 10)
		otherrank = "Master";
	else
		otherrank = "Beginner";

	std::cin.get();
	
}
