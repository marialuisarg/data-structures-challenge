// header file for ShoppingList class
#ifndef LISTOFPATIENTS_H_INCLUDED
#define LISTOFPATIENTS_H_INCLUDED

#include <string>

#include "Patient.h"

using namespace std;

class ListOfPatients {
    private:
        Patient* head;      // pointer to first Patient
        Patient* tail;      // pointer to last Patient
        int size;           // number of Patients in list

        void updateSize(int n) { this->size += n; };
    
    public:
        // constructor and destructor
        ListOfPatients();
        ~ListOfPatients();

        // getters
        Patient* getHead() { return this->head; };
        Patient* getTail() { return this->tail; };
        int getSize() { return this->size; };

        // setters
        void setHead(Patient* head) { this->head = head; };
        void setTail(Patient* tail) { this->tail = tail; };

        // other methods
        void includePatient(string name, string healthStatus, int idNumber);
        bool removePatient(int idNumber);
        Patient* searchPatient(int idNumber);
        void printList();
};

#endif