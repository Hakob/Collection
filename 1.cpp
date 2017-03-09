#include <iostream>
#include <cstdio>
using namespace std;

int n,i,a[100007],m1,m2,m3,tmp;

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	m1=a[1];
	m2=a[2];
	if(m1>m2)
	{
		tmp=m1;
		m1=m2;
		m2=tmp;
	}
	m3=a[3];
	if(m2>m3)
	{
		tmp=m2;
		m2=m3;
		m3=tmp;
	}
	if(m1>m2)
	{
		tmp=m1;
		m1=m2;
		m2=tmp;
	}
	for(i=4;i<=n;i++)
	{
		//a[i]-i tarberaknery (a[i],m1,m2,m3) kam (m1,a[i],m2,m3) kam (m1,m2,a[i],m3) kam (m1,m2,m3,a[i])
		if(a[i]<=m1)
		{
			m3=m2;
			m2=m1;
			m1=a[i];
			continue;
		}
		if(a[i]<=m2)
		{
			m3=m2;
			m2=a[i];
			continue;
		}
		if(a[i]<=m3)
		{
			m3=a[i];
			continue;
		}
		if(a[i]>m3)
		{
			continue;
		}
	}
	cout<<m1<<" "<<m2<<" "<<m3<<"\n";
	return 0;
}