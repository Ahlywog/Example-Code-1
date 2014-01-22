#include "PhysicsClass.h"


PhysicsClass::PhysicsClass()
{
	std::cout << "PhysicsClass Created!" << std::endl;
}

PhysicsClass::~PhysicsClass()
{
	std::cout << "PhysicsClass Deleted!" << std::endl;
}

void PhysicsClass::Update(float TimeDelta)
{
	std::cout << "PhysicsClass Update" << std::endl;
}
