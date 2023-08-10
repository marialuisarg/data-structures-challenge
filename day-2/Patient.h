// header file for ShoppingList class
#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <string>

using namespace std;

class Patient {
    private:
        string name;
        string healthStatus;
        int idNumber;

        Patient* next;      // pointer to next Patient
    
    public:
        // constructor and destructor
        Patient(string name, string healthStatus, int idNumber);

        // getters
        string getName() { return this->name; };
        string getHealthStatus() { return this->healthStatus; };
        int getIdNumber() { return this->idNumber; };
        Patient* getNext() { return this->next; };

        // setters
        void setName(string name) { this->name = name; };
        void setHealthStatus(string healthStatus) { this->healthStatus = healthStatus; };
        void setIdNumber(int idNumber) { this->idNumber = idNumber; };
        void setNext(Patient* next) { this->next = next; };

        // other methods
        void printPatient();
};

#endif