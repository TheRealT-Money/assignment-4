//
// Created by tung on 4/2/2018.
//

#ifndef ASSIGNMENT_4_EMPLOYEE_H
#define ASSIGNMENT_4_EMPLOYEE_H
#include<string>
#include "iostream"
#include "sstream"
#include "iomanip"

using namespace std;

class Employee
{
protected:
    string FirstName, LastName;
    static const int MIN_NUM_CHARS_NAMES = 2;
public:
    Employee(const string &Fname = "Fist Name not set", const string &Lname = "Last Name not set");

    virtual const  string getFirstName() const = 0;
    virtual const string getFullName()const = 0 ;
    virtual const string getLastName() const = 0;
    virtual const string toString() const = 0;
    virtual void setFirstName(const string & FName ) = 0;
    virtual void setLastName(const string & LName)=0;
};

#endif //ASSIGNMENT_4_EMPLOYEE_H
