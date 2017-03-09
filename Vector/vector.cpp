//file vector.cpp
#include "vector.h" 
#include <assert.h>

int vector::count = 0;

ostream& operator << (ostream& f, const vector& v)
 {
	for(int i = 0; i < v.get_size(); i++)
		f << v[i] << ' ';
	f << endl;
	return f;
 }

istream& operator >> (istream& f, vector& v)
{
	for(int i = 0; i < v.get_size(); i++)
		f >> v.ptr[i];
	return f;
}
 

 vector::vector(int s)
 {
	count++;
	size = s;
	ptr = new int[size];
	assert(ptr != 0);
	for(int i = 0; i < s; i++)
			ptr[i] = 0;
 }


	vector::vector(int* p, int s)
	{
		count++;
		size = s;
		ptr = new int[s];
		assert(ptr != 0);
		for(int i = 0; i < s; i++)
			ptr[i] = p[i];

	}
	vector::vector(const vector& v)
	{
		count++;
		size = v.size;
		ptr = new int[size];
		assert(ptr != 0);
		for(int i = 0; i < v.get_size(); i++)
			ptr[i] = v[i];
		    //ptr[i] = v.ptr[i];
	}

	vector::~vector()
	{
		count--;
		if(ptr!=0)
			delete[] ptr;
	}

	int vector::operator== (const vector& v) const
	{
		if(size != v.size)
			return 0;
		for(int i = 0; i < size; i++)
			if(ptr[i] != v[i])
				return 0;
		return 1;
	}

	int vector::operator != (const vector& v) const
	{
		if(size != v.size)
			return 1;
		for(int i = 0; i < size; i++)
			if(ptr[i] != v[i])
				return 1;
		return 0;
	}

	const vector& vector::operator= (const vector& v)
	{
		if(*this != v)
		{
			size = v.get_size();
			delete[] ptr;
			ptr = new int[size];
			assert(ptr != 0);
			for(int i = 0; i < size; i++)
				ptr[i] = v[i];
				//ptr[i] = v.ptr[i]; unnecessary because of operator []
		}
		return *this;
	}


    int vector::operator [] (int i) const
	{
		assert(i >= 0 && i < size);
		return ptr[i];
	}


	int vector::get_size() const
	{
		return size;	
	}


	bool vector::is_empty() const
	{
		return size == 0; 
	}

