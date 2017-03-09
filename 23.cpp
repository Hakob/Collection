#include <iostream>
using namespace std;
void change(int& ,int& );
int main()
{
	const int n=6;
	int A[n],B[n];

	for(int i=0;i<n;i++){
		cin>>A[i];
		B[i]=A[i];
	}

	for(int j=n-1;j>=0;j--){
		for(int i=0;i<n-1;i++){
			change(B[i],B[i+1]);
			change(B[j],B[j-1]);
		}
	}
		for(int k=0;k<n;k++)
		cout<<B[k]<<"  ";
		cout<<endl;
return 0;
}



void change(int& a,int& b)
{
	if(a>b){
		int temp=b;
		b=a;
		a=temp;
	}
}