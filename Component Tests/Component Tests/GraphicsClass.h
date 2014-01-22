#include <iostream>

#ifndef	GRAPHICSCLASS_H
#define GRAPHICSCLASS_H

#include "Component.h"

class GraphicsClass: public Component
{
public:
	virtual	void	Update(float TimeDelta);

	GraphicsClass();
	virtual ~GraphicsClass();
private:
};

#endif