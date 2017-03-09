#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=2,b=1,a=1,c;
	for (int i=3;i<=n;i++)
	{
		c=b+a;
		a=b;
		b=c;
		sum+=c;
	}
	cout<<sum<<endl;
	return 0;
}