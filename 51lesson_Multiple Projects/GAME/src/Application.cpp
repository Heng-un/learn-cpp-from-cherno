//#include ../Engine/src/Engine.h  //直接访问，这种情况文件有一些变动就可能出问题
#include "Engine.h"  //设置GAME项目附加包含目录$(solutionDir)Engine\src
#include <iostream>

int main()
{
	engine::PrintMessage();
	std::cin.get();
}
