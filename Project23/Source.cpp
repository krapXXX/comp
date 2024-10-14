#include <iostream>
using namespace std;
#include "Display.h"
#include "Headset.h"
#include "Mouse.h"
#include "SSD.h"
#include "RAM.h"
#include "CPU.h"
#include "Keyboard.h"

Display::Display()
{
	cores = 0;
}
Display::Display(int a)
{
	cores = a;
}
void Display::Print()
{
	cout << "Display: " << cores << endl;
}

Headset::Headset()
{
	model = nullptr;
}
Headset::Headset(const char* a)
{
	model = a;
}
Headset::Headset(Headset& obj)
{
	model = obj.model;
}
void Headset::Print()
{
	cout << "Headset: " << model << endl;
}

Mouse::Mouse()
{
	model = nullptr;
}
Mouse::Mouse(const char* a)
{
	model = a;
}
Mouse::Mouse(Mouse& obj)
{
	model = obj.model;
}
void Mouse::Print()
{
	cout << "Mouse: " << model << endl;
}

SSD::SSD()
{
	GB = 0;
}
SSD::SSD(int a)
{
	GB = a;
}
void SSD::Print()
{
	cout << "SSD: " << GB << endl;
}

RAM::RAM()
{
	GB = 0;
}
RAM::RAM(int a)
{
	GB = a;
}
void RAM::Print()
{
	cout << "RAM: " << GB << endl;
}

CPU::CPU()
{
	model = nullptr;
}
CPU::CPU(const char* a)
{
	model = a;
}
CPU::CPU(CPU& obj)
{
	model = obj.model;
}
void CPU::Print()
{
	cout << "CPU: " << model << endl;
}

Keyboard::Keyboard()
{
	language = nullptr;
}
Keyboard::Keyboard(const char* a)
{
	language = a;
}
Keyboard::Keyboard(Keyboard& obj)
{
	language = obj.language;
}
void Keyboard::Print()
{
	cout << "Keyboard: " << language << endl;
}

int main()
{

}