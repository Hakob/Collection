//file vector.h
#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <iostream>
using namespace std;
class vector
{
friend ostream& operator << (ostream& f, const vector& v);
friend istream& operator >> (istream& f, vector& v);

public:
	vector(int s = 5);       //default construcor
	vector(int* p, int n);   //constructor with parameters
	vector(const vector& v); //copy constuctor
	~vector();
public:
	int operator== (const vector& v) const;
	int operator!= (const vector& v) const;
	int operator[] (int i) const;
	const vector& operator= (const vector& v);

public:
	int get_size() const;
	bool is_empty() const;
	//int get_count() const;

private:
	int size;
	int* ptr;

public:	
	static int count;
};

#endif