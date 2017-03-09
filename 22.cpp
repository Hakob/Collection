#include <iostream>
using namespace std;
int main(){
	const int n=5;
	int index;
	int A[n];

	for(int i=0;i<n;i++)
		cin>>A[i];

	int min,min1;

	for(int i=0;i<n-1;i++)
		if (A[i+1]>A[i]){
		min=A[i];
		index=i;
	}
	for(int j=index+1;j<n-1;j++){
		if (A[j+1]>A[j])
		min1=A[j];
	{
	cout<<min<<"  "<<min1<<endl;
return 0;
}