#ifndef LIST_H
#define LIST_H

template <typename T>
struct node
{
	T val;
	node<T>* next;
};

template <typename T>
class list
{
public:
	list();
	list(int);
	list(const list& );
	bool is_empty() const;
	void insert(node<T>*,T);
	void input(int,T);
	void Remove(node<T>*);
	void Delete(int);
	~list();
private:
	node<T>* first;
	int size;
};
#endif