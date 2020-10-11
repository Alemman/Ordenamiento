#pragma once
#include "Comparator.h"
#include "Student.h"


class StudentAscendantCompare : public Comparator<Student>
{
public:
    int compare(const Student& left, const Student& right) {
        string lastName1 = (string)((Student) left).getLastName();
        string lastName2 = (string)((Student) right).getLastName();
     

        int a = lastName2.compare(lastName1);
        if (a == 0) {
            string firstName = (string)((Student)right).getFirstName();
            a = firstName.compare((string)((Student)left).getFirstName());
        }
        return a;
    }

};

