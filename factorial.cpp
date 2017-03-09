#include <iostream>
using namespace std;

void fact(int n)
{
int temp=0;

const __int64  MAX=100000;
__int64 arr[MAX]={};

arr[0]=1;

for(int i=1;i<=n;++i){

	for(int j=0;j<=temp;++j)
		arr[j]*=i;
	
		for(int v=0;v<=temp;++v)
			if(arr[v]>9){

				arr[v+1]+=(arr[v]/10);
				arr[v]%=10;
				++temp;
			}
}

for(int j=temp;j>=0;--j){

	if(arr[j]==0)
		--temp;

else break;
}

for(int i=temp;i>=0;--i)
	cout<<arr[i];

}

int main()
{
	int n;
	cin>>n;
	fact(n);
	cout<<endl;
	return 0;
}