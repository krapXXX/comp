#pragma once
class Keyboard
{
	string language;
public:
	Keyboard();
	Keyboard(const char* a);
	Keyboard(Keyboard& obj);
	void Print();
};
