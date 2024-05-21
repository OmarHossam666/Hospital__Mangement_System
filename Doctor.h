#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"

class Doctor : public Person
{
private:
    string department;
    float rating;
public:
    Doctor() = default;
    Doctor(string name , string phone , string address , string department , float rating) : Person(name , phone , address) , department(department) , rating(rating){       }
    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Address: " << address << "\n";
        cout << "Department: " << department << "\n";
        cout << "Rating: " << rating << "\n";
    }
    void setDepartment(string department)
    {
        this-> department = department;
    }
    string getDepartment()
    {
        return department;
    }
    void setRating(float rating)
    {
        this-> rating = rating;
    }
    float getRating()
    {
        return rating;
    }
    ~Doctor() = default;
};

#endif