#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double S=0,b=0,n;
  cin>>n;
  for(double i=0;i<n;i++)
  {
	  b+= sin(i);
	S+=1/b;
  }
  cout<<S<<endl;
 return 0;
}