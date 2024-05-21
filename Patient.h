#ifndef PATIENT_H
#define PATIENT_H

#include "Nurse.h"

class Patient : public Person
{
private:
    string status;
    int roomID;
public:
    Patient() = default;
    Patient(string name , string phone , string address , string status , int roomID) : Person(name , phone , address) , status(status) , roomID(roomID) {      }
    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Address: " << address << "\n";
        cout << "Status: " << status << "\n";
        cout << "Room ID: " << roomID << "\n";
    }
    void setStatus(string status)
    {
        this-> status = status;
    }
    string getStatus()
    {
        return status;
    }
    ~Patient() = default;
};

#endif