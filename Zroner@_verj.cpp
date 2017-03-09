#include <iostream>
using namespace std;
void change(int&a,int&b)
{
	int temp;
	if((a==0&&b!=0){
		temp=a;
		a=b;
		b=temp;
	}
	if(a!=0&&b==0){
		temp=a;
		a=b;
		b=temp;
	}
}
int main()

{
const int n=6;
int A[n];
for (int i=0;i<n;i++)
cin>>A[i];

for (int i=0;i<n;i++)
	for (int j=0;j<n;j++)
		if(i>j)
		change(A[i],A[j]);

for (int j=0;j<n;j++)
cout<<A[j]<<" ";

return 0;
}