#pragma once
#include "LocalDate.h"

enum class Month
{

	JANUARY = 1,
	FEBRUARY = 2,
	MARCH = 3,
	APRIL = 4,
	MAY = 5,
	JUNE = 6,
	JULY = 7,
	AUGUST = 8,
	SEPTEMBER = 9,
	OCTOBER = 10,
	NOVEMBER = 11,
	DECEMBER = 12

}; 

class values 
{

public:
	 static Month* valuesOf();
	 
};

Month* values::valuesOf() {
	Month months[12];
	months[0] = Month::JANUARY;
	months[1] = Month::FEBRUARY;
	months[2] = Month::MARCH;
	months[3] = Month::APRIL;
	months[4] = Month::MAY;
	months[5] = Month::JUNE;
	months[6] = Month::JULY;
	months[7] = Month::AUGUST;
	months[8] = Month::SEPTEMBER;
	months[9] = Month::OCTOBER;
	months[10] = Month::NOVEMBER;
	months[11] = Month::DECEMBER;

	return months;
}

