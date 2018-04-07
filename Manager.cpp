//
// Created by tung on 4/2/2018.
//

#include <sstream>
#include "Manager.h"




const string Manager::getFirstName() const {
    return FirstName;
}

const string Manager::getBossTitle() const {
    return TitleOfBoss;
}

const string Manager::getLastName() const {
    return LastName;
}

const string Manager::getFullName() const {
    return LastName+ ' ' +FirstName;
}

double Manager::getSalary() const {
    return salary;
}

Manager::Manager(const string &FName, const string &LName, double sal, const string &BTitle)
        :Employee(FName,LName),salary(sal),TitleOfBoss(BTitle)
{
    if (sal<0)
        sal *=-1;
    if ( BTitle.length()<MIN_NUM_CHARS_NAMES)
    {
        cout<<"Boss Name "<<BTitle<<"Too short, setting invalid name to default. "<<endl;
        TitleOfBoss="Boss name not set";
    }
}

void Manager::setSalary(double sal) {
if (sal<0){
    salary=sal*(-1);
    return;
}
}

const string Manager::toString() const {
    ostringstream os;
    os<< fixed<<showpoint<<setprecision(2)
      <<"---------------------------------------------"<<endl
      <<"Manager's Data: "<<endl
      <<"---------------------------------------------"<<endl
      <<"Name: "<<getFullName()<<endl
      <<"Boss Title: "<<getBossTitle()<<endl
      <<"Employee Salary: $"<<getSalary()<<" per month"<<endl
      <<"---------------------------------------------"<<endl;
    return os.str();



}

void Manager::setLastName(const string &LName) {
if(LName.length()<MIN_NUM_CHARS_NAMES){
    cout<<"Last Name "<<LastName<<"too short, name not changed."<<endl;
    return;
}
    LastName=LName;
}

void Manager::setFirstName(const string &FName) {
if (FName.length()<MIN_NUM_CHARS_NAMES)
{
    cout<<"First Name "<<FirstName<<"too short, name not changed."<<endl;
    return;
}
    FirstName=FName;
}

void Manager::setBossTitle(const string &BTitle) {
if(BTitle.length()<MIN_NUM_CHARS_NAMES){
    cout<<"Boss Name "<<BTitle<< "Too short, name not changed. "<<endl;
    return;
}
    TitleOfBoss=BTitle;
}

