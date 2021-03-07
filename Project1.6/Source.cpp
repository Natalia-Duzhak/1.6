//Source.ccp
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include "Equilateral.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Equilateral::Triangle triangle;

	triangle.Read();
	cout << "Вивід значень: " << endl;
	triangle.toString();
	cout << "A = " << triangle.A() << endl;
	cout << "B = " << triangle.B() << endl;
	cout << "C = " << triangle.C() << endl;
	cout << "Perimeter = " << triangle.Perimeter() << endl;



	Equilateral e;
	e.Read();
	cout << "Вивід значень: " << endl;
	e.Display();
	double S = e.Square();
	cout << "Square = " << S << endl;
}