#include <iostream>
#include "Room.h"

using namespace std;

const int MAX_SIZE = 100;

int main()
{
    Doctor doctors[MAX_SIZE];
    Nurse nurses[MAX_SIZE];
    Patient patients[MAX_SIZE];
    Room rooms[MAX_SIZE];

    int doctorCount = 0;
    int nurseCount = 0;
    int patientCount = 0;
    int roomCount = 0;

    int choice;
    while (true)
    {
        cout << "-------- Main Menu --------" << "\n";
        cout << "1. Doctors Data" << "\n";
        cout << "2. Nurses Data" << "\n";
        cout << "3. Patients Data" << "\n";
        cout << "4. Rooms Data" << "\n";
        cout << "5. Back to main menu" << "\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
            cout << "-------- Doctors Data --------" << "\n";
            // Display existing doctors
            cout << "Existing Doctors:" << "\n";
            for (int i = 0; i < doctorCount; i++)
            {
            doctors[i].display();
            cout << "\n";
            } 
            // Query for adding new doctors
            char addChoice;
            cout << "Do you want to add new doctor(s) to the list? (Y/N): ";
            cin >> addChoice;

            if (addChoice == 'Y' || addChoice == 'y')
            {
                int numDoctors;
                cout << "Enter the number of doctors you want to add: ";
                cin >> numDoctors;

                for (int i = 0; i < numDoctors; i++)
                {
                    string name, phone, address, department;
                    float rating;

                    cout << "Enter details for doctor " << (i + 1) << ":" << "\n";

                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, name);

                    cout << "Phone: ";
                    cin >> phone;

                    cout << "Address: ";
                    cin.ignore();
                    getline(cin, address);

                    cout << "Department: ";
                    cin.ignore();
                    getline(cin, department);

                    cout << "Rating: ";
                    cin >> rating;

                    doctors[doctorCount++] = Doctor(name, phone, address, department, rating);
                }
            }
            break;
        }
        case 2:
        {
            cout << "-------- Nurses Data --------" << "\n";
            // Display existing nurses
            cout << "Existing Nurses:" << "\n";
            for (int i = 0; i < nurseCount; i++)
            {
                nurses[i].display();
                cout << "\n";
            }

            // Query for adding new nurses
            char addChoice;
            cout << "Do you want to add new nurse(s) to the list? (Y/N): ";
            cin >> addChoice;

            if (addChoice == 'Y' || addChoice == 'y')
            {
                int numNurses;
                cout << "Enter the number of nurses you want to add: ";
                cin >> numNurses;

                for (int i = 0; i < numNurses; i++)
                {
                    string name, phone, address, department;

                    cout << "Enter details for nurse " << (i + 1) << ":" << "\n";

                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, name);

                    cout << "Phone: ";
                    cin >> phone;

                    cout << "Address: ";
                    cin.ignore();
                    getline(cin, address);

                    cout << "Department: ";
                    cin.ignore();
                    getline(cin, department);

                    nurses[nurseCount++] = Nurse(name, phone, address, department);
                }
            }
            break;
        }
        case 3:
        {
            cout << "-------- Patients Data --------" << "\n";
            // Display existing patients
            cout << "Existing Patients:" << "\n";
            for (int i = 0; i < patientCount; i++)
            {
                patients[i].display();
                cout << "\n";
            }

            // Query for adding new patients
            char addChoice;
            cout << "Do you want to add new patient(s) to the list? (Y/N): ";
            cin >> addChoice;

            if (addChoice == 'Y' || addChoice == 'y')
            {
                int numPatients;
                cout << "Enter the number of patients you want to add: ";
                cin >> numPatients;

                for (int i = 0; i < numPatients; i++)
                {
                    string name, phone, address, status;
                    int roomID;

                    cout << "Enter details for patient " << (i + 1) << ":" << "\n";

                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, name);

                    cout << "Phone: ";
                    cin >> phone;

                    cout << "Address: ";
                    cin.ignore();
                    getline(cin, address);

                    cout << "Status: ";
                    cin.ignore();
                    getline(cin, status);

                    cout << "Room ID: ";
                    cin >> roomID;

                    patients[patientCount++] = Patient(name, phone, address, status, roomID);
                }
            }
            break;
        }
        case 4:
        {
            cout << "-------- Rooms Data --------" << "\n";
            // Display existing rooms
            cout << "Existing Rooms:" << "\n";
            for (int i = 0; i < roomCount; i++)
            {
                rooms[i].display();
                cout << "\n";
            }

            // Query for adding new rooms
            char addChoice;
            cout << "Do you want to add new room(s) to the list? (Y/N): ";
            cin >> addChoice;

            if (addChoice == 'Y' || addChoice == 'y')
            {
                int numRooms;
                cout << "Enter the number of rooms you want to add: ";
                cin >> numRooms;

                for (int i = 0; i < numRooms; i++)
                {
                    int roomID;
                    bool occupied;

                    cout << "Enter details for room " << (i + 1) << ":" << "\n";
                    cout << "Room ID: ";
                    cin >> roomID;
                    cout << "Occupied? (1/0): ";
                    cin >> occupied;

                    rooms[roomCount++] = Room(roomID, occupied);
                }
            }
            break;
        }
        case 5:
        {
            cout << "Returning to the main menu..." << "\n";
            continue;
        }
        default:
            cout << "Invalid choice. Please try again." << "\n";
            break;
    }
}
    return 0;
}