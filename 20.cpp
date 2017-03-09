#include<iostream>
using namespace std;
int main()
{
	int const n=3;
	int a[n], b[n], c[n];
	int i, j, k;
	cout<<"nermuceq a[n]-@  ";
	for (i=0;i<n;i++)
		cin>>a[i];
	cout<<"nermuceq b[n]-@  ";
	for (i=0;i<n;i++)
		cin>>b[i];
	for (i=0;i<n;i++)
	{
		if (a[i]<b[i])
			j=a[i];
		else
			j=b[i];
		for(k=j;k>0;k--)
		{
			if(a[i]%k==0 && b[i]%k==0)
				break;
		}
		c[i]=k;
	}
	cout<<"c[n]-n e";
	for (i=0;i<n;i++)
	{
		cout<<c[i]<<"  ";
	}
	cout<<endl;
	return 0;
}