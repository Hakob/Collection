#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char *name;
	name=new char[20];
	name="vnlsdgnldsfgnlds";
	char *a;
	a=name+8;
	string n;
	n=name;
	cout<<n<<endl;
	cout<<name<<"  "<<a<<endl;
	return 0;
}