#include <iostream>
using namespace std; // ��� ������������� cout

void f(int x) {
	// �������� ��������� �� ��������  YST ARZHEQI
	cout << x << " ";
	x = 1;
	cout << x << " ";
}

void g(int* x) {
	// �������� ��������� �� ������  YST HASCEI      /*(*,&, ) SRANQ PARAMETRERI HAMAR EN */
	cout << *x << " ";								 /*(*,&, ) SRANQ KAN NAEV POPOXAXAKANNERI HAMAR,NUYN NSHANAKUTYAMB */
	*x = 2;
	cout << *x << " ";
}

void h(int& x) {
	// �������� ��������� �� ������  YST HGHUMI
	cout << x << " ";
	x = 3;
	cout << x << " ";
}

int main() {
	int x = 0;
	f(x);
	g(&x);
	h(x);
	cout << endl;
	cout << x;
	return 0;
}