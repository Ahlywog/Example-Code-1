#include <iostream>
#include <map>
#include <string>

#ifndef ENTITY_H
#define ENTITY_H

#include "Component.h"

class Entity
{
public:
	virtual	void	Update(float TimeDelta);

	bool	AddComponent(std::string, Component* NewComponent = NULL);

	Entity();
	~Entity();

private:
	std::map<std::string, Component*> _ComponentMap;
	std::map<std::string, Component*>::iterator _ComponentIterator;
};

#endif