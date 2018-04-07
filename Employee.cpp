//
// Created by tung on 4/2/2018.
//
#include "Employee.h"

Employee::Employee(const string &Fname, const string &Lname) {

    if (Fname.length() < MIN_NUM_CHARS_NAMES) {
        cout << "First name " << Fname << " too short, setting invalid name to default." << endl;
        FirstName = "First name not set";
    }
    if (Lname.length() < MIN_NUM_CHARS_NAMES) {
        cout << "Last name " << Lname << " too short, setting invalid name to default." << endl;
        LastName = "Last name not set";
    }
}
