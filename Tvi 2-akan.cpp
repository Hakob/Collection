#include <iostream>
using namespace std;
void Tpel_Erkuakan(int);
int main()
{
	const int n=4;
	int C[n];
	for(int i=0;i<n;i++)
		cin>>C[i];
	for(int j=0;j<n;j++)
	Tpel_Erkuakan(C[j]);
	return 0;
}
void Tpel_Erkuakan(int k)
{
	for(int j=31;j>=0;j--)
			cout<<((k>>j)&1);
			cout<<endl;
}