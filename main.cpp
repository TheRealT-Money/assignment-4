#include "Employee.h"
#include "Manager.h"


int main() {
    int choice;
    bool flag = true;
    bool check = true;
    while (flag)
    {
        cout<<"***************************MAIN MENU**************************\n"
            <<"1. Create Manager instance from keyboard. \n"
            <<"2. Print Manager to Console.\n"
            <<"3. Change Manager's last name.\n"
            <<"4. Change Manager Salary.\n"
            <<"5. Change Manager's Boss'es Title.\n"
            <<"6. Print only Manager's name and Salary to console.\n"
            <<"7. Print only Manager's boss'es title to console.\n"
            <<"8. Exit\n";
        cin>>choice;
        switch (choice)
        {
            case 1:
             string first, last, title;
                double salary;
                cout<<"Enter first name of Manager: ";
                cin>>first;
                cout<<"Enter last name of Manager: ";
                cin>>last;
                cout<<"Enter title of Manager's Boss: ";
                cin>>title;
                cout<<"Enter Manager's salary [xx.yy]: ";
                cin>>salary;
                Manager * M;
                M = new Manager(first, last, salary, title);
                break;
            case 2:
            cout<<M->toString()<<endl;
                break;
            case 3:
                string lastname;
                cout << "Enter Manager's new last name: ";
                cin>>lastname;
                M->setBossTitle(lastname);
                break;
            case 4:
                double sal;
                cout<<"Type manager's new salary and press key: ";
                cin>>sal;
                M->setSalary(sal);
                break;
            case 5:
                string bosstitle;
                cout<<"Enter bosses new title: ";
                cin>>bosstitle;
                M->setBossTitle(bosstitle);
                break;
            case 6:
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"Manager name: "<<M->getFullName()<<endl;
                cout<<"Manager salary: $"<<M->getSalary()<<endl;
                break;
            case 7:
                cout<<"Boss title: "<<M->getBossTitle()<<endl;
                break;
            case 8:
                flag= false;
                break;
            default:
                cout<<"wrong in input. Try again";

        }
        cout<<"another cout..";
        cout<<"this is a test ";
        return 0;
    }

}