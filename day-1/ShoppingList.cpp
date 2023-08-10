#include "ShoppingList.h"
#include <iostream>

using namespace std;

// other methods
bool ShoppingList::addItem(string item, int qty) {
    items.push_back(item);
    quantities.push_back(qty);
    updateSize(1);

    return true;
}

bool ShoppingList::removeItem(string item) {
    for (int i = 0; i < getSize(); i++) {
        if (items[i] == item) {
            items.erase(items.begin() + i);
            quantities.erase(quantities.begin() + i);
            updateSize(-1);
            return true;
        }
    }
    
    cout << "Item not found!" << endl;
    return false;
}

bool ShoppingList::updateItemName(string item, string newName) {
    for (int i = 0; i < getSize(); i++) {
        if (items[i] == item) {
            items[i] = newName;
            return true;
        }
    }

    cout << "Item not found!" << endl;
    return false;
}

bool ShoppingList::updateItemQty(string item, int newQty) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i] == item) {
            quantities[i] = newQty;
            return true;
        }
    }

    cout << "Item not found!" << endl;
    return false;
}

void ShoppingList::printList() {
    cout << "Shopping List" << endl;
    cout << "-------------" << endl;

    for (int i = 0; i < items.size(); i++)
        cout << items[i] << ".............." << quantities[i] << endl;
}