#ifndef ROOM_H
#define ROOM_H

#include "Patient.h"

class Room
{
private:
    int id;
    bool occupied;
public:
    Room() = default;
    Room(int id , bool occupied) : id(id) , occupied(occupied) {         }
    void display()
    {
        cout << "Room ID: " << id << "\n";
        cout << "Status: " << (occupied ? "Occupied" : "Vacant") << "\n";
    }
    void setId(int id)
    {
        this-> id = id;
    }
    int getId()
    {
        return id;
    }
    void setOccupied(bool occupied)
    {
        this-> occupied = occupied;
    }
    bool getOccupied()
    {
        return occupied;
    }
};

#endif