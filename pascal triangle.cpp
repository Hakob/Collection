#include <iostream>
using namespace std;
void Zug(int,int);
int main()
{
	int n;
	cin>>n;
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(j>=i)
			Zug(j,i);
			
		}
		cout<<"--->"<<j<<endl;
	}
	finally {g++;}
	return 0;
}

void Zug(int a,int b)
{
	__int64 temp,temp1,temp2;
	temp=temp1=temp2=1;
	
	for(__int64 i=1;i<=a;i++) {temp*=i;}

	for(__int64 j=1;j<=b;j++) {temp1*=j;}

	for(__int64 k=1;k<=a-b;k++) {temp2*=k;}

	cout<<temp/(temp1*temp2)<<" ";
}

