#pragma once
class Mouse
{
	string model;
public:
	Mouse();
	Mouse(const char* a);
	Mouse(Mouse & obj);
	void Print();
};
