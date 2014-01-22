#include <iostream>

#ifndef PHYSICSCLASS_H
#define PHYSICSCLASS_H

#include "Component.h"

class PhysicsClass: public Component
{
public:
	virtual	void	Update(float TimeDelta);

	PhysicsClass();
	virtual ~PhysicsClass();
private:
};

#endif