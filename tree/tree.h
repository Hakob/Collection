#ifndef TREE_H
#define TREE_H

struct node
{
	node* right;
	node* left;
	int value;
	int size;
	node(int v)
	{
		value = v;
		left = 0;
		right = 0;
		size = 0;
	}
};

class tree
{
private:
	node* root;
public:
	tree();
	void build(int a[], int x, node*& z);
	void build(int a[], int n)
	{
		build(a, n, root);
	}
	void print(node* s);
	void solve_post(node* y);
	void solve_post()
	{
		solve_post(root);
	}
	node* get_root();
};

#endif