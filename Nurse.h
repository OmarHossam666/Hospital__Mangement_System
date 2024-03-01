#ifndef NURSE_H
#define NURSE_H

#include "Doctor.h"

class Nurse : public Person
{
private:
    string department;
public:
    Nurse() = default;
    Nurse(string name, string phone, string address, string department)
        : Person(name, phone, address), department(department){}
    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Address: " << address << "\n";
        cout << "Department: " << department << "\n";
    }
};

#endif