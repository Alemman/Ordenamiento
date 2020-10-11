#pragma once

#include "Comparator.h"
#include "Student.h"
#include "LocalDate.h"
#include "Month.h"

class MonthComparator : public Comparator<Student> {

    //Month months[12];


public:
    int compare(const Student& left, const Student& right) {
        int r = 0;
        Month* months = values::valuesOf();
        LocalDate Left = ((Student)left).getBirthday();
        LocalDate Right = ((Student)right).getBirthday();
        Month monthRight = ((Student)right).getBirthday().getMonth();
        Month monthLeft = ((Student)left).getBirthday().getMonth();


     /*   if (Left.compareTo(monthRight) == 0)
            return 0;*/
        if ((int)monthLeft == (int)monthRight) {

            return 0;
           
        }

        for (int i = 1; i < 13; i++) {

            if ((int)monthLeft == i) {
                r = -1;
            }
            if ((int)monthRight == i) {
                r = 1;
            }

        }


         return r;
    }
};