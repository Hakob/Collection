#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
	char a[101];
	cin>>a;
	stack<char> s;
	for(int i=0;a[i];i++){
		if((a[i]=='{')||(a[i]=='(')||(a[i]=='['))
			s.push(a[i]);

		else if (s.is_empty())
		{
			cout<<"no"<<endl;
			return 0;
		}
		if((a[i]==']' && s.get_top()!='[')  ||  (a[i]=='}' && s.get_top()!='{')  ||  (a[i]==')' && s.get_top()!='('))
		{
			cout<<"no"<<endl;
			return 0;
		}
	}
	return 0;
}