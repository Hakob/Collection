#include <iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
	int x=3;
	int y=5;
	swap(x,y);
	cout<<x<<"  "<<y<<endl;
	cout<<(&x)<<"  "<<(&y)<<endl;
	return 0;
}
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}