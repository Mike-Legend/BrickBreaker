#include "stdafx.h"
#include "Ball.h"

void Ball::Update()
{
	if (!moving)
		return;

	int tempx = x_position + x_velocity;
	int tempy = y_position + y_velocity;

	if (tempx < 0 || tempx > WINDOW_WIDTH-1)
		x_velocity *= -1;
	else
		x_position = tempx;

	if (tempy < 0)
		y_velocity *= -1;
	else
		y_position = tempy;
}
