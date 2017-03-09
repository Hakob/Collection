#include <iostream>
using namespace std;
int main()
{
	int A[10];
	int b=0;
	for(int i=0;i<10;i++)
	{
		cin>>A[i];
		if(A[i]==7)
		b++;
	}
	if(b)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
return 0;
}