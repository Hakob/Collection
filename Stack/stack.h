#ifndef STACK_H
#define STACK_H

template <typename T>
class stack
{
public:
	stack();
	stack(int);
	void push(T);
	void pop();
	T get_top();
	bool is_empty();
private:
	T* dz;
	int size;
	int top;
};
#endif