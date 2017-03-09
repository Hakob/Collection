#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int ZAR;
	cout<<RAND_MAX<<endl;
	cout<<rand()<<endl;
	int h[7]={0};
	for(int i=1;i<1000;i++)
	{
	ZAR=1+rand()%6;
	h[ZAR]++;
	}
	for(int i=1;i<7;i++)
	cout<<i<<" ic "<<h[i]<<endl;
	return 0;
}