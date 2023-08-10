#include "ShoppingList.h"
#include <iostream>

using namespace std;

// other methods
bool ShoppingList::addItem(string item, int qty) {
    items.push_back(item);
    quantities.push_back(qty);

    return true;
}

bool ShoppingList::removeItem(string item) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i] == item) {
            items.erase(items.begin() + i);
            quantities.erase(quantities.begin() + i);
            break;
        }
    }
    
    return true;
}

bool ShoppingList::updateItemName(string item, string newName) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i] == item) {
            items[i] = newName;
            break;
        }
    }

    return true;
}

bool ShoppingList::updateItemQty(string item, int newQty) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i] == item) {
            quantities[i] = newQty;
            break;
        }
    }

    return true;
}

void ShoppingList::printList() {
    cout << "Shopping List" << endl;
    cout << "-------------" << endl;

    for (int i = 0; i < items.size(); i++)
        cout << items[i] << ".............." << quantities[i] << endl;
}