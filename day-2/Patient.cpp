#include "Patient.h"
#include <iostream>

using namespace std;

Patient::Patient(string name, string healthStatus, int idNumber) {
    this->name = name;
    this->healthStatus = healthStatus;
    this->idNumber = idNumber;
    this->next = NULL;
}

void Patient::printPatient() {
    cout << "Name: " << getName() << endl;
    cout << "Health Status: " << getHealthStatus() << endl;
    cout << "ID Number: " << getIdNumber() << endl;
    cout << "-------------------" << endl;
}