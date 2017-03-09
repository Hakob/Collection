#include <iostream>
using namespace std;
int main(){
	const int n=5;
	int A[n];
	for(int k=0;k<n;k++)
		cin>>A[k];
	int c=0;
	for(int i=0;i<(n-1)/2;i++){
		if(A[i]==A[n-i-1])
			c++;
	}
	if(c==n/2) cout<<"H-n simetrik e"<<endl;
	else cout<<"H-n simetrik che"<<endl;
	return 0;
}