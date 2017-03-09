#include <iostream>
using namespace std; // для использования cout

void f(int x) {
	// передача параметра по значению  YST ARZHEQI
	cout << x << " ";
	x = 1;
	cout << x << " ";
}

void g(int* x) {
	// передача параметра по адресу  YST HASCEI      /*(*,&, ) SRANQ PARAMETRERI HAMAR EN */
	cout << *x << " ";								 /*(*,&, ) SRANQ KAN NAEV POPOXAXAKANNERI HAMAR,NUYN NSHANAKUTYAMB */
	*x = 2;
	cout << *x << " ";
}

void h(int& x) {
	// передача параметра по ссылке  YST HGHUMI
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