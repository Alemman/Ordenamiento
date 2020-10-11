#pragma once

#include "Comparator.h"

class IntegerAscendantComparator : public Comparator<int>
{
public:
    int compare(const int& left, const int& right)
    {
        return right - left;
    }
};