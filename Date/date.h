#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class date
{

	friend istream& operator >> (istream&, date&);
	friend ostream& operator << (ostream&, const date&);

public:
	date(int = 1,int = 1, int = 1993); //default constr.

	bool is_end_of_month();
	bool nahanj_tari();

	date operator ++(int);            //postfix d++
	date& operator ++();               //prefix ++d
	const date& operator += (int);

	void set_date(int, int, int);
	date& next_day();

	int get_day() const;
	int get_month() const;
	int get_year() const;

private:
	static int m_days[];
	static int count;
	int day;
	int month;
	int year;
};


#endif