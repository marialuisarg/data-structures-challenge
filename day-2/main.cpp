#include <iostream>
#include <stdlib.h>

#include <string.h>

#include "ListOfPatients.h"

using namespace std;

int menu() {
    string op;
    int choice;
        
    cout << "MENU" << endl;
    cout << "-------------" << endl;
    cout << "[1] Add patient" << endl;
    cout << "[2] Remove patient" << endl;
    cout << "[3] List patients by order of arrival" << endl;
    cout << "[4] Exit" << endl;
    cout << "-------------" << endl;

    cout << "Enter option: ";
    getline(cin, op);
    choice = atoi(op.c_str());

    cout << "-------------" << endl;

    return choice;
}

int main() {
    ListOfPatients list;
    string name, healthStatus;
    int idNumber, op = 0;

    while (op != 4) {
        op = menu();

        switch (op) {
            case 1:
                cout << "Patient name: ";
                getline(cin, name);
                cout << "Current health status: ";
                getline(cin, healthStatus);
                cout << "ID number: ";
                cin >> idNumber;

                list.includePatient(name, healthStatus, idNumber);
                cin.ignore();
                break;
            
            case 2:
                cout << "Patient id number: ";
                cin >> idNumber;

                if (list.removePatient(idNumber))
                    cout << "Patient removed successfully!" << endl;

                cin.ignore();
                break;

            case 3:
                list.printList();
                break;

            case 4:
                exit(0);
                break;
            
            default:
                cout << "Invalid option! Choose between 1 and 4." << endl;
                break;
        }

        cout << "-------------" << endl;
    }

    return 0;
}