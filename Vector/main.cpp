#include "vector.h"
int main()
{
	int k;
	cin >> k;
	cout << "created vectors count is: " << vector::count<< endl;
	vector z1;
	cout << "created vectors count is: " << vector::count<< endl;
	cout << z1;
	k = z1[2];
	vector z2(k);
	vector z3(z1);
	cout << "created vectors count is: " << vector::count<< endl;
	int a[3] = {6, 7, 8};
	vector z4(a, 3);
	cout << z4;
	cout << "created vectors count is: " << vector::count<< endl;
	z1 = z4;
	cout << "z1 new values: " << z1;
	cout << "z2 -->  " << z2;
	return 0;

}