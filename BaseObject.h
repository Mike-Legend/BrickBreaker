#pragma once

class BaseObject
{
public:

	ConsoleColor color = White;			
	int x_position = 0;
	int y_position = 0;
	char visage = '.';

	virtual void Draw() const;
};