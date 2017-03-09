#include <string>
#include <iostream>

using std :: string;
using std :: ostream;
using std :: istream;
using std :: cout;

#pragma once
#ifndef Long_Long_H
#define Long_Long_H

class Long_Long
{
private:
	int value[1000];
public:
	Long_Long();
	Long_Long operator + ( const Long_Long & ) const;
	Long_Long operator += ( const Long_Long & );
	Long_Long operator - ( const Long_Long & ) const;
	Long_Long operator -= ( const Long_Long & );
	Long_Long operator * ( const Long_Long & ) const;
	Long_Long operator *= ( const Long_Long & );
	Long_Long operator / ( const Long_Long & ) const;
	Long_Long operator /= ( const Long_Long & );
	Long_Long operator ++ ();
	Long_Long operator = ( const Long_Long & );
	bool operator == ( const Long_Long & ) const;
	bool operator != ( const Long_Long & ) const;
	bool operator <= ( const Long_Long & ) const;
	bool operator >= ( const Long_Long & ) const;
	bool operator > ( const Long_Long & ) const;
	friend ostream & operator << ( ostream & out, const Long_Long & var )
	{
		bool valueFound = false;
		for( int i = 0; i < 1000; ++i )
        {
            if( var.value[i] != 0 )
            {
                valueFound = true;
            }
            if( valueFound == true )
            {
                out << var.value[i];
            }
        }
        if( valueFound == false )
        {
            out << "0";
        }
        return out;
    }
	friend istream & operator >> ( istream & in, Long_Long & var )
    {
        string str;
        in >> str;
        int length = str.length();
        for( int i = 1000 - length; i < 1000; ++i )
        {
            var.value[i] = (str[length-(1000-i)] % 16);
        }
        return in;
    }
};
Long_Long :: Long_Long()
{
	for(int i = 0; i < 1000; ++i)
		value[i] = 0;
}
Long_Long Long_Long :: operator + ( const Long_Long & var ) const
{
	Long_Long result;
	for( int i = 0; i < 1000; ++i)
		result.value[i] = value[i] + var.value[i];
	for( int i = 0; i < 1000; ++i )
    {
		if ( result.value[i] >= 10 )
        {
			result.value[i - 1] += ( result.value[i] / 10 );
            result.value[i] %= 10;
        }
    }
	return result;
}
Long_Long Long_Long :: operator - ( const Long_Long & var ) const
{
	Long_Long result;
	int first = 9999, second = 9999;
	int temp = 0;
	for( int i = 0; i < 1000; ++i )
	{
		if( var.value[i] - value[i] > 0 )
		{
			second = i;
			break;
		}
	}
	for( int i = 0; i < 1000; ++i )
	{
		if( value[i] - var.value[i] > 0 )
		{
			first = i;
			break;
		}
	}
	if( second < first )
	{
		for( int i = 0; i < 1000; ++i )
		result.value[i] = var.value[i] - value[i];
		for( int i = 0; i < 1000; ++i)
		{
			if( result.value[i] < 0 )
			{
				result.value[i] += 10;
				result.value[i - 1] -= 1;
			}
		}
		if( temp == 0)
		{
			cout << "-";
			++temp;
		}
		return result;
	}
	for( int i = 0; i < 1000; ++i )
		result.value[i] = value[i] - var.value[i];
	for( int i = 0; i < 1000; ++i)
	{
		if( result.value[i] < 0 )
		{
			result.value[i] += 10;
			result.value[i - 1] -= 1;
		}
	}
	return result;
}
Long_Long Long_Long :: operator += ( const Long_Long & var )
{
	Long_Long result;
	for( int i = 0; i < 1000; ++i )
	{
		result.value[i] = value[i] + var.value[i];
	}
	for( int i = 0; i < 1000; ++i )
    {
		if ( result.value[i] >= 10 )
        {
			result.value[i - 1] += ( result.value[i] / 10 );
            result.value[i] %= 10;
        }
    }
	for( int i = 0; i < 1000; ++i )
	{
		value[i] = result.value[i];
	}
	return result;
}
Long_Long Long_Long :: operator -= ( const Long_Long & var )
{
	Long_Long result;
	int first = 9999, second = 9999;
	int temp = 0;
	for( int i = 0; i < 1000; ++i )
	{
		if( var.value[i] - value[i] > 0 )
		{
			second = i;
			break;
		}
	}
	for( int i = 0; i < 1000; ++i )
	{
		if( value[i] - var.value[i] > 0 )
		{
			first = i;
			break;
		}
	}
	if( second < first )
	{
		for( int i = 0; i < 1000; ++i )
		result.value[i] = var.value[i] - value[i];
		for( int i = 0; i < 1000; ++i)
		{
			if( result.value[i] < 0 )
			{
				result.value[i] += 10;
				result.value[i - 1] -= 1;
			}
		}
		if( temp == 0)
		{
			cout << "-";
			++temp;
		}
		for( int i = 0; i < 1000; ++i )
		{
			value[i] = result.value[i];
		}
		return result;
	}
	for( int i = 0; i < 1000; ++i )
		result.value[i] = value[i] - var.value[i];
	for( int i = 0; i < 1000; ++i)
	{
		if( result.value[i] < 0 )
		{
			result.value[i] += 10;
			result.value[i - 1] -= 1;
		}
	}
	for( int i = 0; i < 1000; ++i )
	{
		value[i] = result.value[i];
	}
	return result;
}
Long_Long Long_Long :: operator * ( const Long_Long & var ) const
{
	Long_Long result;
	int r = 0;
	for( int i = 999; i > 0; --i )
	{
		for( int j = 999; j > 0; --j )
		{
			result.value[j - r] += value[j] * var.value[i];
			if( result.value[j] >= 10 )
			{
				int v = j;
				while( result.value[v] >= 10 )
				{
					result.value[v - 1] += ( result.value[v] / 10 );
				    result.value[v] %= 10;
					--v;
				}
			}
		}
		++r;
	}
	return result;
}
Long_Long Long_Long :: operator *= ( const Long_Long & var )
{
	Long_Long result;
	int r = 0;
	for( int i = 999; i > 0; --i )
	{
		for( int j = 999; j > 0; --j )
		{
			result.value[j - r] += value[j] * var.value[i];
			if( result.value[j] >= 10 )
			{
				int v = j;
				while( result.value[v] >= 10 )
				{
					result.value[v - 1] += ( result.value[v] / 10 );
				    result.value[v] %= 10;
					--v;
				}
			}
		}
		++r;
	}
	for( int i = 0; i < 1000; ++i )
	{
		value[i] = result.value[i];
	}
	return result;
}
Long_Long Long_Long :: operator / ( const Long_Long & var ) const
{
	Long_Long result;
	Long_Long variable;
	int A[1000];
	int begin = 1, ret = 0;
	int x = 0, point = 0;
	int valueunreal[1000];
	for( int j = 0; j < 1000; ++j )
	{
		valueunreal[j] = value[j];
	}
	for( int i = 0;  ; ++i )
	{
		for( int j = 999; j >= 0; --j )
		{
			variable.value[j] =	var.value[j] * i;
		}
		for( int j = 999; j > 0; --j )
		{
			variable.value[j - 1] += ( variable.value[j] / 10 );
			variable.value[j] %= 10;
		}
		int length2 = 0;
		for( int j = 0; j < 1000; ++j )
		{
			if( variable.value[j] == 0 )
			{
				++length2;
			}
			else break;
		}
		int length1 = 0;
		for( int j = 0; j < 1000; ++j )
		{
			if( valueunreal[j] == 0 )
			{
				++length1;
			}
			else break;
		}
		if( length2 <= length1 )
		{
			int first = 9999, second = 9999;
	        for( int j = 0; j < 1000; ++j )
	        {
				if( variable.value[j] - valueunreal[j] > 0 )
				{
					second = j;
					break;
				}
			}
			for( int j = 0; j < 1000; ++j )
			{
				if( valueunreal[j] - variable.value[j] > 0 )
				{
					first = j;
					break;
				}
			}
			if( second < first )
			{
				A[x] = i - 1;
				if( i - 1 == 0 )
					break;
				for( int j = 999; j >= 0; --j )
				{
					variable.value[j] =	var.value[j] * ( i - 1 );
				}
				for( int j = 0; j < 1000; ++j )
					valueunreal[j] = valueunreal[j] - variable.value[j];
				for( int j = 0; j < 1000; ++j )
				{
					if( valueunreal[j] < 0 )
					{
						valueunreal[j] += 10;
						valueunreal[j - 1] -= 1;
					}
				}
				if( x == 0 )
					break;
				++x;
				i = 0;
			}
			if( second == first )
			{
				A[x] = i;
				break;
			}
		}
	}
	for( int j = 0; j <= x; ++j )
		result.value[999 - x + j] = A[j];
	return result;
}
Long_Long Long_Long :: operator /= ( const Long_Long & var )
{
	Long_Long result;
	Long_Long variable;
	int A[1000];
	int begin = 1, ret = 0;
	int x = 0, point = 0;
	int valueunreal[1000];
	for( int j = 0; j < 1000; ++j )
	{
		valueunreal[j] = value[j];
	}
	for( int i = 0;  ; ++i )
	{
		for( int j = 999; j >= 0; --j )
		{
			variable.value[j] =	var.value[j] * i;
		}
		for( int j = 999; j > 0; --j )
		{
			variable.value[j - 1] += ( variable.value[j] / 10 );
			variable.value[j] %= 10;
		}
		int length2 = 0;
		for( int j = 0; j < 1000; ++j )
		{
			if( variable.value[j] == 0 )
			{
				++length2;
			}
			else break;
		}
		int length1 = 0;
		for( int j = 0; j < 1000; ++j )
		{
			if( valueunreal[j] == 0 )
			{
				++length1;
			}
			else break;
		}
		if( length2 <= length1 )
		{
			int first = 9999, second = 9999;
	        for( int j = 0; j < 1000; ++j )
	        {
				if( variable.value[j] - valueunreal[j] > 0 )
				{
					second = j;
					break;
				}
			}
			for( int j = 0; j < 1000; ++j )
			{
				if( valueunreal[j] - variable.value[j] > 0 )
				{
					first = j;
					break;
				}
			}
			if( second < first )
			{
				A[x] = i - 1;
				if( i - 1 == 0 )
					break;
				for( int j = 999; j >= 0; --j )
				{
					variable.value[j] =	var.value[j] * ( i - 1 );
				}
				for( int j = 0; j < 1000; ++j )
					valueunreal[j] = valueunreal[j] - variable.value[j];
				for( int j = 0; j < 1000; ++j )
				{
					if( valueunreal[j] < 0 )
					{
						valueunreal[j] += 10;
						valueunreal[j - 1] -= 1;
					}
				}
				if( x == 0 )
					break;
				++x;
				i = 0;
			}
			if( second == first )
			{
				A[x] = i;
				break;
			}
		}
	}
	for( int j = 0; j <= x; ++j )
		result.value[999 - x + j] = A[j];
	for( int j = 0; j < 1000; ++j )
		value[j] = result.value[j];
	return result;
}
Long_Long Long_Long :: operator ++ ()
{
	Long_Long result;
	result.value[999] = value[999] + 1;
	for( int i = 999; i > 0; --i )
	{
		result.value[i - 1] += ( result.value[i] / 10 );
		result.value[i] %= 10;
	}
	for( int i = 0; i < 1000; ++i )
	{
		value[i] = result.value[i];
	}
	return result;
}
Long_Long Long_Long :: operator = ( const Long_Long & var )
{
	Long_Long result;
	for( int i = 0; i < 1000; ++i )
		value[i] = var.value[i];
	for( int i = 0; i < 1000; ++i )
		result.value[i] = value[i];
	return result;
}
bool Long_Long :: operator == ( const Long_Long & var ) const
{
	int temp = 0;
	for( int i = 0; i < 1000; ++i )
	{
		if( value[i] == var.value[i] )
			++temp;
		else break;
	}
	if( temp == 1000 )
		return true;
	else return false;
}
bool Long_Long :: operator <= ( const Long_Long & var ) const
{
	int first = 9999, second = 9999;
	for( int j = 0; j < 1000; ++j )
	{
		if( var.value[j] - value[j] > 0 )
		{
			second = j;
			break;
		}
	}
	for( int j = 0; j < 1000; ++j )
	{
		if( value[j] - var.value[j] > 0 )
		{
			first = j;
			break;
		}
	}
	int temp = 0;
	for( int i = 0; i < 1000; ++i )
	{
		if( value[i] == var.value[i] )
			++temp;
		else break;
	}
	if( second < first ||  temp == 1000 )
		return true;
	else return false;
}
bool Long_Long :: operator != ( const Long_Long & var ) const
{
	int temp =0;
	for( int i = 0; i < 1000; ++i )
	{
		if( value[i] == var.value[i] )
			++temp;
		else break;
	}
	if( temp == 1000 )
		return false;
	else return true;
}
bool Long_Long :: operator >= ( const Long_Long & var ) const
{
	int first = 9999, second = 9999;
	for( int j = 0; j < 1000; ++j )
	{
		if( var.value[j] - value[j] > 0 )
		{
			second = j;
			break;
		}
	}
	for( int j = 0; j < 1000; ++j )
	{
		if( value[j] - var.value[j] > 0 )
		{
			first = j;
			break;
		}
	}
	int temp = 0;
	for( int i = 0; i < 1000; ++i )
	{
		if( value[i] == var.value[i] )
			++temp;
		else break;
	}
	if( second < first || temp == 1000 )
		return false;
	else return true;
}
bool Long_Long :: operator > ( const Long_Long & var ) const
{
	int first = 9999, second = 9999;
	for( int j = 0; j < 1000; ++j )
	{
		if( var.value[j] - value[j] > 0 )
		{
			second = j;
			break;
		}
	}
	for( int j = 0; j < 1000; ++j )
	{
		if( value[j] - var.value[j] > 0 )
		{
			first = j;
			break;
		}
	}
	if( second < first )
		return false;
	else return true;
}
#endif