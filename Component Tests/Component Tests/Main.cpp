#include <iostream>
#include <vector>

#include "EntityManager.h"


int main(int argc, const char * argv[])
{
	EntityManager *Manager = new EntityManager;

	Entity *Thingy = Manager->GetNewEntity();

	Thingy->AddComponent("Physics", new PhysicsClass());

	Thingy->AddComponent("Graphics", new GraphicsClass());

	Manager->Update(1.0f);

	delete Manager;
	Manager = NULL;

	system("PAUSE");
	return 0;
}