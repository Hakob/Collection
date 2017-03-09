#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int x,a;
	static int i=0;
	int fx;
	for(i;i<21;i++)
	{
	cin>>a;
	x=a;
	if(x>=-2&&x<2)
	fx=4;
	else
		fx=x*x;
	cout<<fx<<endl;
	}
}