#include <iostream>
#include "tree.h"
using namespace std;

void main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	tree b;
	b.build(a, 10);
	b.solve_post();
	b.print(b.get_root());
}