//Equilateral.ccp
#include "Equilateral.h"
#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

bool Equilateral::Init(double a, double b, double c)
{
	if ((a == b) && (a == c) && (b == c))
	{

		SetAB(a);
		SetBC(b);
		SetAC(c);
		return true;
	}
	else
		return false;

}
void Equilateral::SetAB(double value)
{
	if (value > 0)
		triangle.SetAB(value);
	else
		triangle.SetAB(0);
}

void Equilateral::SetBC(double value)
{
	if (value > 0)
		triangle.SetBC(value);
	else
		triangle.SetBC(0);
}

void Equilateral::SetAC(double value)
{
	if (value > 0)
		triangle.SetAC(value);
	else
		triangle.SetAC(0);
}
string Equilateral::toString() const
{
	return triangle.toString();
}
void Equilateral::Display() const
{
	triangle.toString();
}

void Equilateral::Read()
{
	double  AB, BC, AC;
	do
	{
		cout << "a = "; cin >> AB;
		cout << "b = "; cin >> BC;
		cout << "c = "; cin >> AC;
	} while (!Init(AB, BC, AC));
}

double Equilateral::Square() const
{
	double a = triangle.GetAB();
	double S = (a * a * sqrt(3) * 1.) / 4;
	return S;
}
void Equilateral::Triangle::SetAB(double value)
{
	if (value > 0)
		a = value;
	else
		a = 0;
}

void Equilateral::Triangle::SetBC(double value)
{
	if (value > 0)
		b = value;
	else
		b = 0;
}

void Equilateral::Triangle::SetAC(double value)
{
	if (value > 0)
		c = value;
	else
		c = 0;
}

bool Equilateral::Triangle::Init(double a, double b, double c)
{
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		SetAB(a);
		SetBC(b);
		SetAC(c);
		return true;
	}
	else
	{
		return false;

	}
}

void Equilateral::Triangle::Read()
{
	double AB, BC, AC;
	do
	{
		cout << "a = "; cin >> AB;
		cout << "b = "; cin >> BC;
		cout << "c = "; cin >> AC;
	} while (!Init(AB, BC, AC));
}
string Equilateral::Triangle::toString() const
{
	stringstream sout;
	sout << "a = " << a << endl;
	sout << "b = " << b << endl;
	sout << "c = " << c << endl;

	return sout.str();
}
void Equilateral::Triangle::Display() const
{
	cout << toString() << endl;
}
double Equilateral::Triangle::A()
{
	double A;
	A = acos(((b * b) + c * c - a * a) / (2 * c * b));
	return A;
}
double Equilateral::Triangle::B()
{
	double B;
	B = acos(((a * a) + c * c - b * b) / (2 * c * a));
	return B;
}
double Equilateral::Triangle::C()
{
	double C;
	C = acos(((b * b) + a * a - c * c) / (2 * a * b));
	return C;
}

double Equilateral::Triangle::Perimeter()
{
	return a + b + c;
}


