#include <iostream>
using namespace std;
int main()
{
	int Polindrom;
	int b=0,C;
	cin>>Polindrom;
	C=Polindrom;
	while(Polindrom)
	{
		b=b*10+Polindrom%10;
		Polindrom/=10;
	}
	if(b==C)
		cout<<"Tiv@ polindrom e"<<endl;
	else
		cout<<"Tiv@ polindrom che"<<endl;
	return 0;
}