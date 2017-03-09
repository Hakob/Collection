#include <iostream>
using namespace std;
int main()
{
	unsigned int n;unsigned int a,b,c;
	cin>>n;
	for(unsigned int k=1;k<=n;k++)
	{ c=k;
		for(unsigned int j=1;j<=n;j++)
		{ b=j;
			for(unsigned int i=1;i<=n;i++)
			{ a=i;
			if(a*a+b*b==c*c)
			{
			cout<<"a="<<a<<' '<<"b="<<b<<' '<<"c="<<c<<' '<<endl;
		}
		}
		}
	}
	return 0;
}