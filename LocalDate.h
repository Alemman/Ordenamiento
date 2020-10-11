#pragma once

#include"Month.h"

class LocalDate 
{
private:
	int dayOfMonth;
	Month month;
	int year;
public:
	LocalDate(int year, Month month, int dayOfMonth);
	LocalDate() {};
	 Month getMonth();
	 int compareTo(Month m);
};

int LocalDate::compareTo(Month m) 
{
	int r = -1 ;
//	Month* months = values::valuesOf();
	if (m == month) {
		r = 0;
		cout << "gggg";
	}
	else
	{
		cout<< (int)month;
		cout << (int)m;
	}
	/*else if(m > month)
	{
		r = 1;
	}
	else
	{
		r = -1;
	}*/
	return r;
}

Month LocalDate::getMonth() 
{
	return month;
}

LocalDate::LocalDate(int _year, Month _month, int _dayOfMonth)
{
	year = _year;
	month = _month;
	dayOfMonth = _dayOfMonth;
}

