#include "stdafx.h"
#include "BaseObject.h"

void BaseObject::Draw() const
{
	Console::SetCursorPosition(x_position, y_position);
	Console::ForegroundColor(color);
	std::cout << visage;
}