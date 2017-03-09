#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int Polindrom,c,b=0;
	int a=0;
	double S=0;
	cin>>Polindrom;
	while(Polindrom)
	{
		Polindrom/=10;
		S++;
	}
		for(double i=0;i<S;i++)
		{
			a=Polindrom%10;
			c=pow(10,S-i);
			a*=c;
			b+=a;
		}
	if(b==Polindrom)
		cout<<"Tiv@ polindrom e"<<endl;
	else
		cout<<"Tiv@ polindrom che"<<endl;
	return 0;
}