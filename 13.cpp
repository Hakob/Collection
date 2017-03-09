#include <iostream>
using namespace std;
int main()
{
	int a=5;
	int* b=&a;/*b pop.-i arjeqin talis e a-i hascen*/
	int** p=&b;/*p-in el b-i hascen*/
	cout<<&a<<"  "<<&b<<"  "<<p<<endl;  // &a=b   &b=p  
	return 0;
}