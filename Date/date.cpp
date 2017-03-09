#include "date.h"

int date::m_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int date::count = 0;

void date::set_date(int d, int m, int y)
{
	month = (m >= 1 && m <= 12)? m : 1;
	year = (y >= 1000 && y <= 3007)? y : 1994;
	if(month == 2 && nahanj_tari())
		day = (d >= 1 && d <= 29) ? d : 1;
	else
		day = (d >= 1 && d <= m_days[month]) ? d : 1;

}



date::date(int d, int m , int y)
{
	set_date(d, m, y);
}




bool date::is_end_of_month()
{
	if(month == 2 && nahanj_tari())
		return day == 29;
	else
		return day == m_days[month];
}




date& date::next_day()
{
	if(month == 12 && day == 31) {
		year++;
		day = 1;
		month = 1;
	}
	else if(is_end_of_month()) {
			month++;
			day = 1;
	} else {
		day++;
	}
	return *this;
}




bool date::nahanj_tari()
{
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}




date date::operator ++ (int)    // postfix d++
{
	date t(day, month, year);
	next_day();
	return t;
}
	


date& date::operator ++ ()     // prefix ++d
{
	next_day();
	return *this;
}




const date& date::operator += (int p)
{
	for(int i = 0; i < p; i++)
		next_day();
	return *this;
}




istream& operator >> (istream& in, date& d)
{
	int dd;
	int mm;
	int yy;
	in >> dd >> mm >> yy;
	d.set_date(dd, mm, yy);
	return in;
}





ostream& operator << (ostream& out, const date& d)
{
	static char* month_names[13] =
	    {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	out << d.day << ' ' << month_names[d.month] << ' ' << d.year << endl;
	return out;
}




int date::get_day() const
{
	return day;	
}




int date::get_month() const
{
	return month;
}




int date::get_year() const
{
	return year;
}