#include <iostream>
using namespace std;
int main()
{
	int number,S=0;
	cin>>number;
    for (int i=2; i*i<=number; i++)
	{
        if (number % i == 0)
		S++;

    }
	if(S==0&&number <= 1)
    cout<<"Parz e"<<endl;
	else
		cout<<"Baghadryal e"<<endl;
	return 0;
}