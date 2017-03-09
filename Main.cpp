#include <iostream>
using namespace std;
const int n=7;
void B(int* b)
{
	for(int i=0;i<n;i++)
	cout<<*(b+i)<<"  ";
}

void main()
{
	int g[n]={0,6,8};
	B(g);
	cout<<endl;
	return;
}