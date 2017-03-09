#include <iostream>
using namespace std;
bool isMutuallyPrime(int a, int b)
{
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	return (a==1);
}

int main()
{
	const int n=5;
	int A[5];
	for(int i=0;i<n;++i)
	{
		cin>>A[i];
	}
	for(int i=n-1;i>=0;--i)
	{
		if(isMutuallyPrime(A[i],i))
		{
			cout<<A[i]<<' ';
		}
	}
	return 0;
}
