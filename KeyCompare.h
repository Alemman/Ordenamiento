#pragma once

#include <iostream>
#include "Comparator.h"
#include "Student.h"

class KeyCompare :public Comparator<Student>
{
public:
    int compare(const Student& left, const Student & right) {
        int integerLeft = (int)((Student)left).getClave();
        int integerRight = (int)((Student)right).getClave();

        return  integerRight - integerLeft;
    }
};