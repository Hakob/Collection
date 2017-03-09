#include "stack.h"


template <typename T> stack<T>::stack()
{
	dz=new T[];
	size(0);
	top=0;
}


template <typename T> stack<T>::stack(int n)
{
	dz=new T[n];
	size=n;
	top=0;
}

template <typename T> void stack<T>::push(T a)
{
	if(top==size){
		T* d=new T[2*size];
	for(int i=0;i<top;i++)
		d[i]=dz[i];
	}
	delete[]dz;
	*dz=*d;
	d[top]=a;
	top++;
}

template <typename T> void stack<T>::pop()
{
	if(is_empty())
		throw "empty";
	top--;
}

template <typename T> T stack<T>::get_top()
{
	if(is_empty())
		throw "empty";
	return dz[top-1];
}

template <typename T> bool stack<T>::is_empty()
{
	return (!(top));
}