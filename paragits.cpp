#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,p;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	if(a+b>=c&&a+c>=b&&b+c>=a)
		cout<<"P="<<a+b+c<<"\n";
		cout<<"S="<<sqrt(p*(p-a)*(p-b)*(p-c))
	else
		cout<<"No Triange\n";
	if(a==b&&b==c)
		cout<<"an equilatoral triangle"<<endl;
	if(a==b||b==c||a==c)
		cout<<"an isosceles triangle"<<endl;
	return 0;
}