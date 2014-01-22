#include <iostream>
#include <vector>

#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H


#include "Entity.h"
#include "GraphicsClass.h"
#include "PhysicsClass.h"

class EntityManager
{
public:
	Entity*	GetNewEntity();

	void	Update(float DeltaTime);

	EntityManager();
	~EntityManager();
private:
	std::vector<Entity*>			*_EntityVector;
	std::vector<Entity*>::iterator	_EntityIterator;
};

#endif