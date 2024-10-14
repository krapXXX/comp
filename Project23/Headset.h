#pragma once
class Headset
{
	string model;
public:
	Headset();
	Headset(const char* a);
	Headset(Headset & obj);
	void Print();
};
