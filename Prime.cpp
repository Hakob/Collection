#include <iostream>
#include <cmath>
using namespace std;

bool prime(double );
int main()
{
	int n;
	cin>>n;
	int*A=new int [n];
	
	for(int i=1;i<n;i++){
		if(prime(i)){
			A[i]=i;
			}
	}
for(int k=0;k<n;k++)
	cout<<A[k]<<" ";

	return 0;
}

bool prime(double b)
{
	double k=0;
	double z;
	z=sqrt(b);
	for(int c=2;c<z;c++)
		if(((int)b)%c==0)
			k++;
	return(!k);
	
}