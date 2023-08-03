#pragma once
#include "BaseObject.h"

class Ball : public BaseObject
{
public:
	bool moving = false;
	int x_velocity = 0;
	int y_velocity = 0;
	void Update();
};