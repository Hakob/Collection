#include <iostream>
#include <cstdio>
using namespace std;

int rec(int i1, int i2);
int x,n,i,a[1000007];

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	cout<<rec(1,n)<<"\n";
	return 0;
}

int rec(int i1, int i2)
{
	if(i1==i2 && a[i1]==x)
	{
		return i1;
	}
	if(i1==i2 && a[i1]!=x)
	{
		return -1;
	}
	int k;
	k=(i1+i2)/2;
	if(a[k]>=x)
	{
		return rec(i1,k);
	}
	else
	{
		return rec(k+1,i2);
	}
}