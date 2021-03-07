//Equilateral.h
#pragma once
#include <string>

using namespace std;
class Equilateral
{
public:
	class Triangle
	{
	private:
		double a;
		double b;
		double c;

	public:
		double GetAB() const { return a; }
		double GetBC() const { return b; }
		double GetAC() const { return c; }

		void SetAB(double value);
		void SetBC(double value);
		void SetAC(double value);

		string toString() const;
		bool Init(double, double, double);
		void Display() const;
		void Read();

		double Perimeter();
		double A();
		double B();
		double C();
	};

	double GetAB() const { return triangle.GetAB(); }
	double GetBC() const { return triangle.GetBC(); }
	double GetAC() const { return triangle.GetAC(); }

	void SetAB(double value);
	void SetBC(double value);
	void SetAC(double value);

	string toString() const;
	void Display() const;
	void Read();
	bool Init(double a, double b, double c);

	double Square() const;

private:
	Triangle triangle;
	double square;
};

