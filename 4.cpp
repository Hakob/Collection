#include <iostream>
#include <cstdio>
using namespace std;

int ans,n,i,a[1000007],d[1000007],j;

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		d[i]=1;
	}
	//d[i]-n cuyca talis te amenaerkary inch erkarutyamb hajordakanutyun karelia yntrel nenc vor verji elementy ayt hajordakanutyan lini zangvaci i-rd andamy
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			if(a[j]>=a[i])
			{
				continue;
			}
			if(d[j]+1>d[i])
			{
				d[i]=d[j]+1;
			}
		}
	}
	ans=1;
	for(i=1;i<=n;i++)
	{
		if(d[i]>ans)
		{
			ans=d[i];
		}
	}
	cout<<ans<<"\n";
	return 0;
}
