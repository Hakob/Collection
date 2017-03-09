#include <iostream>
#include "complex.h"
using namespace std;

complex::complex()
{
	(x,y);
}

void complex::get_complex (double a,double b)
{
	a=this->x;
	b=this->y;
	cout<<"("<<a<<","<<b<<")";
}
/*
complex::operator / (complex a, complex b) const
{
	double c=(a.x*b.x-a.y*b.y)/(b.x*b.x+b.y*b.y);
	double d=(a.x*b.y+a.y*b.x)/(b.x*b.x+b.y*b.y);
	return complex(c,d);
}

complex::double operator * (complex a, complex b) const
{
	double c=a.x*b.x-a.y*b.y;
	double d=a.x*b.y+a.y*b.x;
	return complex(c,d);
}

complex::double operator + (complex a, complex b,double c,double d) const
{
	double E=a+c;
	double S=b+d;
	return complex(E,S);
}
complex::double operator - (complex a, complex b) const
{
	double c=a.x-b.x;
	double d=a.y-b.y;
	return complex(c,d);
}
complex::complex sum (complex a, complex b)
{
	return a+b;
}
complex::complex substract(complex a,complex b)
{
	return a-b;
}

complex::complex multiply(complex a,complex b)
{
	return a*b;
}

complex::complex divide(complex a,complex b)
{
	return a/b;
}
*/