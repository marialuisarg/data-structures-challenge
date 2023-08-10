#include "ListOfPatients.h"
#include <iostream>

using namespace std;

ListOfPatients::ListOfPatients() {
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

ListOfPatients::~ListOfPatients() {
    Patient* current = this->head;
    Patient* next;

    while (current != NULL) {
        next = current->getNext();
        delete current;
        current = next;
    }
}

void ListOfPatients::includePatient(string name, string healthStatus, int idNumber) {

    // check if idNumber already exists
    Patient* check = searchPatient(idNumber);

    if (check != NULL) {
        cout << "This id number is already being used by " << check->getName() << "!" << endl;
        return;
    }

    delete check;
    
    Patient* newPatient = new Patient(name, healthStatus, idNumber);

    // verifies if list is empty
    if (this->head == NULL) {
        this->head = newPatient;
        this->tail = newPatient;
    } else {
        Patient* currentTail = this->getTail();
        currentTail->setNext(newPatient);
        this->tail = newPatient;
    }
    
    updateSize(1);
    cout << "Patient added successfully!" << endl;
}

bool ListOfPatients::removePatient(int idNumber) {
    Patient* current = getHead();
    Patient* previous = NULL;

    while (current != NULL) {
        if (current->getIdNumber() == idNumber) {
            
            if (previous == NULL)
                this->head = current->getNext();
            else
                previous->setNext(current->getNext());

            delete current;
            updateSize(-1);
            return true;

        } else {

            previous = current;
            current = current->getNext();

        }
    }

    cout << "Patient not found!" << endl;
    return false;
}

Patient* ListOfPatients::searchPatient(int idNumber) {
    Patient* current = getHead();

    while (current != NULL) {
        if (current->getIdNumber() == idNumber)
            return current;
        else
            current = current->getNext();
    }

    return NULL;
}

void ListOfPatients::printList() {
    Patient* current = getHead();

    cout << "List of Patients (ordered by arrival)" << endl;
    cout << "----------------" << endl;

    while (current != NULL) {
        current->printPatient();
        current = current->getNext();
    }
}