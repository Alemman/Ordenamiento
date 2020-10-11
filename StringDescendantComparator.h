#pragma once

#include <iostream>
#include "Comparator.h"

using namespace std;
class StringDescendantComparator : public Comparator<string>
{
public:
    int compare(const string& left, const string& right)
    {
        return left.compare(right);
    }
};
