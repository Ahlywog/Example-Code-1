#include "Component.h"

Component::Component()
{
	std::cout << "Component Created!" << std::endl;
}

Component::~Component()
{
	std::cout << "Component Deleted!" << std::endl;
}

void Component::Update(float TimeDelta)
{
	std::cout << "Component Update" << std::endl;
}