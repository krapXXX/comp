#pragma once
class CPU
{
	string model;
public:
	CPU();
	CPU(const char* a);
	CPU(CPU& obj);
	void Print();
};
