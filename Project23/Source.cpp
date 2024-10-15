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
/*	Cond  * obj;   // Не уничтожается при удалении объекта класса Car!  агрегирование
	int year;
	Engine a; // удаляется приуничтожении объекта класса Car!!!
public:
	Car(Cond * x,double d,int y): obj(x),a(d)
	{
		year = y;
		
	}
	}*/
class PC
{
	SSD s;
	RAM r;
	CPU c;
	Headset* hs;
	Display* d;
	Keyboard* k;
	Mouse* m;
	int year;
public: 
	PC()
	{
		s = 0;
		r = 0;
		year = 0;
		c = nullptr;
		hs = nullptr;
		d = 0;
		k = nullptr;
		m = nullptr;
	}
	PC(int Y, int S, int R, const char* C, Headset* HS, Display* D, Keyboard* K, Mouse* M) :s(S), r(R), c(C), hs(HS), d(D), k(K), m(M)
	{
		year = Y;
	}
	void Print()
	{
		cout <<"Year: " << year << endl;
		s.Print();
		r.Print();
		c.Print();
		hs->Print();
		d->Print();
		k->Print();
		m->Print();
	}
	/*~PC()
	{
		delete[]hs;
		delete[]k;
		delete[]m;
	}*/

};

int main()
{
	Headset hs{"GBL"};
	Keyboard k{ "Samsung" };
	Mouse m{ "Logitech" };
	Display d = 13;

	PC* obj = new PC (2024, 1500, 1100, "Intel", &hs, &d, &k, &m);
	obj->Print();
	delete[] obj;

}