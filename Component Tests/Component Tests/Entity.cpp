#include "Entity.h"


Entity::Entity()
{
	std::cout << "Entity Created!" << std::endl;
}

Entity::~Entity()
{
	for (_ComponentIterator = _ComponentMap.begin(); _ComponentIterator != _ComponentMap.end(); ++_ComponentIterator)
	{
		delete (_ComponentIterator)->second;
		(_ComponentIterator)->second = NULL;
	}
	
	std::cout << "Entity Deleted!" << std::endl;
}

void Entity::Update(float TimeDelta)
{
	for (_ComponentIterator = _ComponentMap.begin(); _ComponentIterator != _ComponentMap.end(); ++_ComponentIterator)
	{
		(_ComponentIterator)->second->Update(TimeDelta);
	}
}

bool	Entity::AddComponent(std::string ComponentName, Component *NewComponent)
{
	if (NewComponent != NULL)
	{
		_ComponentMap.insert(std::pair<std::string, Component*>(ComponentName, NewComponent));
		return true;
	}
	return false;
}
