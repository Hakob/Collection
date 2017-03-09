#include "list.h"
#include <iostream>

//DEFAULT CONTRUCTOR
template<class T> list<T>::list():size(0),first(NULL){}

//CONSTRUCTOR
template<class T> list<T>::list(int n)
{
	size=n;
	first=new node<T>[size];

	for(int i=0;i<size-1;++i)

	(first+size-1)->next=NULL;
}

//COPY CONSTRUCTOR
template<class T> list<T>::list(const list& L)
{
	size=L.size;
	first=new node<T>[size];
	(first+size-1)->next=NULL;
	for(int i=0;i<size;i++)
		first[i].val=L[i].val;
}

//DESTRUCTOR
template<class T> list<T>::~list()
{
}