#include "tree.h"
#include <iostream>


tree::tree()
{
	root = 0;
}
void tree::build(int a[], int x, node*& z)
{
	if(x == 0)
		return;
	z = new node(a[x/2]);
	build(a, x/2, z->left);
	build(a+x/2+1, x-x/2-1, z->right);
}
void tree::print(node* s)
{
	if(s == 0)
		return;
	print(s->left);
	std::cout << s->value << " " << s->size << std::endl;
	print(s->right);
}
void tree::solve_post(node* y)
{
	if(y == 0)
		return;
	solve_post(y->left);
	solve_post(y->right);
	y->size = 1;
	if(y->left)
		y->size += y->left->size;
	if(y->right)
		y->size += y->right->size;
}
node* tree::get_root()
{
	return root;
}