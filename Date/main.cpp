#include "date.h"

int main()
{
	date d1(2, 12, 1577);
	date d2(31, 12, 1297);
	date d3(29, 2, 2008);
	cout << "d1 --> " << d1 << endl;
	cout << d1.get_day() << endl;
	cout << endl;
	cout << "the next day for d1 is  --> " << d1.next_day() << endl;
	cout << "d2 --> " << d2 << endl;
	cout << "d2 ++ is --> " << d2++ << endl;
	cout << "after postfix d2 is --> " << d2 << endl;
	cout << "d3 --> " << d3 << endl;
	cout << "the next day for d3 is --> " << d3.next_day() << endl;
	cout << "++d3 is --> " << ++d3 << endl;
	d1 += 3;
	cout << "d1 += 3 is --> " << d1 << endl;
	d3 += 1;
	cout << "d3+=1 --> " << d3 << endl;
	d3 += 2;
	cout << "d3+=2 --> " << d3 << endl;
	date d4;
	cin >> d4;
	cout << d4 << endl;
	return 0;
}