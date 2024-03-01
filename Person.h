#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
protected:
    string name;
    string phone;
    string address;
public:
    Person() = default;
    Person(string name, string phone, string address)
        : name(name), phone(phone), address(address){}
    virtual void display() = 0;
};

#endif