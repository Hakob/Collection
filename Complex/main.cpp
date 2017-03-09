#pragma once
#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
	complex a;
	complex b;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	complex c;
	c.x=a.x+b.x;
	c.y=a.y+b.y;
	complex (c.x,c.y);
	return 0;
}