#include <iostream>

#ifndef	COMPONENT_H
#define COMPONENT_H

class Component
{
protected:
	Component();
public:
	virtual	void	Update(float timeDelta);

	virtual ~Component();
private:
};

#endif