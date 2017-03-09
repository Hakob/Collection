#include <iostream>
using namespace std;
void Hanoi(int a1,int a2,int a3,int n);
	int main()
{
	int v;
	cin>>v;
	Hanoi(1,2,3,v);
	return 0;
}
	void Hanoi(int a1,int a2,int a3,int n)
	{
		if (n==1) {
			cout<<a1<<" => "<<a2<<endl;
			return;
		}
		
		Hanoi(a1,a3,a2,n-1);
		Hanoi(a1,a2,a3,1);
		Hanoi(a3,a2,a1,n-1);
	}