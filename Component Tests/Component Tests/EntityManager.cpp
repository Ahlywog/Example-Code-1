#include "EntityManager.h"

Entity* EntityManager::GetNewEntity()
{
	Entity *Temp = new Entity;
	_EntityVector->push_back(Temp);
	return Temp;
}

EntityManager::EntityManager()
{
	_EntityVector = new std::vector<Entity*>;
}

EntityManager::~EntityManager()
{
	for (_EntityIterator = _EntityVector->begin(); _EntityIterator != _EntityVector->end(); ++_EntityIterator)
	{
		delete *_EntityIterator;
		*_EntityIterator = NULL;
	}

	delete _EntityVector;
}

void EntityManager::Update(float DeltaTime)
{
	for (_EntityIterator = _EntityVector->begin(); _EntityIterator != _EntityVector->end(); ++_EntityIterator)
	{
		(*_EntityIterator)->Update(DeltaTime);
	}
}
