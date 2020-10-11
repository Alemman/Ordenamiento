#pragma once

#include<string.h>
#include<string>
#include "LocalDate.h"
using namespace std;

class Student
{
private:
    string firstName;
    string lastName;
    LocalDate birthday;
    int clave;
public:
    Student(string firstName, string lastName, LocalDate birthday, int clave);
    string getFirstName();
    void setFirstName(string _firstName);
    string getLastName();
    void setLastName(string _lastName);
    LocalDate getBirthday();
    void setBirthday(LocalDate _birthday);
    int getClave();
    void setClave(int _clave);

};

Student::Student(string _firstName, string _lastName, LocalDate _birthday, int _clave) {
    firstName = _firstName;
    lastName = _lastName;
    birthday = _birthday;
    clave = _clave;
}

string Student::getFirstName()
{
    return firstName;
}
void Student::setFirstName(string _firstName) {
    firstName = _firstName;
}

string Student::getLastName() {
    return lastName;
}

void Student::setLastName(string _lastName) {
    lastName = _lastName;
}

LocalDate Student::getBirthday()
{
    return birthday;
}

void Student::setBirthday(LocalDate _birthday) 
{
    birthday = _birthday;
}

int Student::getClave() 
{
    return clave;
}

void Student::setClave(int _clave)
{
    clave = _clave;
}