#include <iostream>
#include <string.h>
#include <time.h>
#include "StringAscendantComparator.h"
#include "IntegerDescendantComparator.h"
#include "Comparator.h"
#include "Sorter.h"

#include"StudentAscendantCompare.h"
#include "Month.h"
#include "MonthCompare.h"
#include "KeyCompare.h"

using namespace std;




template <typename T>
void printArray(T elements[], int elementsCount);

int main()
{
	// Sorting and printing array of strings
	string datos[] = { "Hector", "Jocelyn", "Antonio", "Caleb", "Isaías", "Jose", "Gustavo", "Alain", "Ivan" };
	StringAscendantComparator* stringComparator = new StringAscendantComparator;

	Sorter<string>::sort(datos, stringComparator, 9);

	printArray<string>(datos, 9);


	// Sorting and printing array of integers
	int integerElements[] = { 10,43,21,64,28,38,33,51,42,21 };
	IntegerDescendantComparator* integerComparator = new IntegerDescendantComparator;

	Sorter<int>::sort(integerElements, integerComparator, 10);

	printArray<int>(integerElements, 10);

	//aqui empieza lo mio
	//Month FEBRUARY = FEBRUARY;

	//enum Month month = Month::MARCH;
	Student students[] = {
		 *new Student("Gustavo "," Aleman",*new LocalDate(1999, Month::MARCH,3),283889),
		 *new Student("Elena ","Perez",*new LocalDate(1978, Month::SEPTEMBER,3),283890),
		 *new Student("Mario","Pesetas",*new LocalDate(1989, Month::JULY, 3), 283891),
		 * new Student("Alek","Ivanov",*new LocalDate(2000, Month::AUGUST,3),283892),
		 * new Student("Mileva","Martinez",*new LocalDate(1997, Month::DECEMBER,3),283893),
		 * new Student("Tiffany","Thompson",*new LocalDate(1996, Month::JANUARY,3),283894)
	};

	StudentAscendantCompare* StudentCompare = new StudentAscendantCompare;

	Sorter<Student>::sort(students,StudentCompare,6);

	for (int i = 0; i < 6; i++) {
		if (i > 0) {
			cout << ",";
		}
		cout << students[i].getLastName();
		cout << students[i].getFirstName();
		cout << "\n";
	}
	cout << endl;

	MonthComparator* MonthCompare = new MonthComparator;
	Sorter<Student>::sort(students, MonthCompare, 6);


	for (int i = 0; i < 6; i++) {
		if (i > 0) {
			cout << ",";
		}
		cout << students[i].getLastName();
		cout << students[i].getFirstName();
		cout << "\n";
	}
	cout << endl;

	KeyCompare* KeyCmp = new KeyCompare;
	Sorter<Student>::sort(students, KeyCmp, 6);

	for (int i = 0; i < 6; i++) {
		if (i > 0) {
			cout << ",";
		}
		cout << students[i].getClave();
		//cout << students[i].getFirstName();
		cout << "\n";
	}
	cout << endl;
	return 0;
}

template <typename T>
void printArray(T elements[], int elementsCount) {
	for (int i = 0; i < elementsCount; i++) {
		if (i > 0) {
			cout << ",";
		}
		cout << elements[i];
	}
	cout << endl;
}




