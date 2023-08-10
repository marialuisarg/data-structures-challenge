#include <iostream>
#include <stdlib.h>

#include <string.h>

#include "ShoppingList.h"

using namespace std;

int main() {
    ShoppingList list;
    string item, newName;
    int qty, op = 0;

    while (op != 6) {

        // menu
        cout << "MENU" << endl;
        cout << "-------------" << endl;
        cout << "[1] Add item" << endl;
        cout << "[2] Remove item" << endl;
        cout << "[3] Update item name" << endl;
        cout << "[4] Update item quantity" << endl;
        cout << "[5] Print list" << endl;
        cout << "[6] Exit" << endl;
        cout << "-------------" << endl;

        cout << "Enter option: ";
        cin >> op;
        cout << "-------------" << endl;

        switch (op) {
            case 1:
                cout << "Item name: ";
                cin.ignore();
                getline(cin, item);
                cout << "Quantity: ";
                cin >> qty;

                if (list.addItem(item, qty))
                    cout << "Item added successfully!" << endl;

                break;
            
            case 2:
                cout << "Item name: ";
                cin.ignore();
                getline(cin, item);

                if (list.removeItem(item))
                    cout << "Item removed successfully!" << endl;

                break;

            case 3:
                cout << "Item name: ";
                cin.ignore();
                getline(cin, item);
                cout << "New item name: ";
                getline(cin, newName);

                if (list.updateItemName(item, newName))
                    cout << "Name updated successfully!" << endl;

                break;

            case 4:
                cout << "Item name: ";
                cin.ignore();
                getline(cin, item);
                cout << "New quantity: ";
                cin >> qty;

                if (list.updateItemQty(item, qty))
                    cout << "Quantity updated successfully!" << endl;

                break;

            case 5:
                list.printList();
                break;
            
            case 6:
                exit(0);
                break;
            
            default:
                cout << "Invalid option!" << endl;
                break;
        }

        cout << "-------------" << endl;
    }

    return 0;
}