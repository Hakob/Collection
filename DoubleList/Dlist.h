#ifndef DLIST_H
#define DLIST_H

struct node
{
	int value;
	node *prev,*next;
};

class Dlist
{
public:
	Dlist():first(0),last(0){}
	~Dlist();
	Dlist(const Dlist&);
	void insert_after(node*,int);
private:
	node *first,*last;
};

#endif