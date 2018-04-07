//
// Created by tung on 4/2/2018.
//

#ifndef ASSIGNMENT_4_MANAGER_H
#define ASSIGNMENT_4_MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
protected:
    double salary;
    string TitleOfBoss;
public:
    virtual const string getBossTitle()const;
    virtual const string getFirstName()const;
    virtual const string getLastName()const ;
    virtual const string getFullName()const;
    double getSalary() const;
    Manager (const string &FName = "Fist Name not set", const string &LName = "Last Name not set", double salary = 0, const string & BTitle="Title not set");
    virtual void setBossTitle(const string &BTitle);
    void setFirstName(const string &FName);
    void setLastName(const string &LName);
    virtual void setSalary(double sal);
    const string toString()const;



};




#endif //ASSIGNMENT_4_MANAGER_H
