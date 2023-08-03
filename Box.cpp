#include "stdafx.h"
#include "Box.h"

void Box::Draw() const
{
	Console::ForegroundColor(color);
	Console::DrawBox(x_position, y_position, width, height, doubleThick);
}

bool Box::Contains(int x, int y)
{
	if (x_position <= x && x_position + width > x && y_position <= y && y_position + height > y)
		return true;
	else
		return false;
}