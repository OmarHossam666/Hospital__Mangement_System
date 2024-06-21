# Hospital Management System

## Overview
This Hospital Management System is a command-line application developed in C++ that helps manage various aspects of a hospital. It leverages Object-Oriented Programming (OOP) principles and separate compilation for better organization and maintainability. The system includes sections for managing doctors, nurses, patients, and rooms. Users can add and display data in each section.

## Features
- **Doctor Section**: Manage doctor details.
- **Nurse Section**: Manage nurse details.
- **Patient Section**: Manage patient details.
- **Room Section**: Manage room details.

## Class Structure
- **Person Class**: A base class representing common attributes for doctors, nurses, and patients.
- **Doctor Class**: Inherits from Person class and includes additional attributes specific to doctors.
- **Nurse Class**: Inherits from Person class and includes additional attributes specific to nurses.
- **Patient Class**: Inherits from Person class and includes additional attributes specific to patients.
- **Rooms Class**: Represents room details and management.

## Getting Started
### Prerequisites
- A C++ compiler (e.g., GCC, Clang, MSVC)

## Usage
1. **Main Menu**: Navigate through the main menu to access different sections.
   - Doctor Section
   - Nurse Section
   - Patient Section
   - Room Section
   - Exit

2. **Doctor Section**:
   - Add Doctor: Input details for a new doctor.
   - Display Doctors: List all doctors and their details.

3. **Nurse Section**:
   - Add Nurse: Input details for a new nurse.
   - Display Nurses: List all nurses and their details.

4. **Patient Section**:
   - Add Patient: Input details for a new patient.
   - Display Patients: List all patients and their details.

5. **Room Section**:
   - Add Room: Input details for a new room.
   - Display Rooms: List all rooms and their details.

## Code Structure
- **main.cpp**: Contains the main logic for navigation and interaction.
- **person.h**: Defines the Person class and its methods.
- **doctor.h**: Defines the Doctor class and its methods.
- **nurse.h**: Defines the Nurse class and its methods.
- **patient.h**: Defines the Patient class and its methods.
- **room.h: Defines the Room class and its methods.

## License
This project is licensed under the MIT License.
