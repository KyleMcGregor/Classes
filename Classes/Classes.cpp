// Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
    return 0;
}

 
class complex
{
	double re, im; //representation, two doubles
public:
	complex(double i, double i) :re{ r }, im{ i } {} //construct complex from two scalars
	complex(double r) : re{ r }, im{ 0 } {}
	complex() : re{ 0 }, im{ 0 } {}

	double real() const { return re; }
	void real(double d) { re = d; }
	double imag() const { return im; }
	void imag(double d) { im = d; }

	complex& operator+=(complex z) { re += z.re, im += z.im; return *this; }

	complex& operator-=(complex z) { re -= z.re, im -= z.im;return *this }

	~complex();

private:

};

complex::complex()
{
}

complex::~complex()
{
}

