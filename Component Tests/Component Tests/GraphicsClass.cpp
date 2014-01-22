#include "GraphicsClass.h"

GraphicsClass::GraphicsClass()
{
	std::cout << "GraphicsClass Created!" << std::endl;
}

GraphicsClass::~GraphicsClass()
{
	std::cout << "GraphicsClass Deleted!" << std::endl;
}

void GraphicsClass::Update(float TimeDelta)
{
	std::cout << "GraphicsClass Update" << std::endl;
}