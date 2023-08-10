// header file for ShoppingList class
#ifndef SHOPPINGLIST_H_INCLUDED
#define SHOPPINGLIST_H_INCLUDED

#include <string>
#include <vector>

using namespace std;

class ShoppingList {
    private:
        vector<string> items;
        vector<int> quantities;
    
    public:
        // getters
        string getItem(int index) { return items[index]; };
        int getQty(int index)  { return quantities[index]; };
        vector<string> getItems() { return items; };
        vector<int> getQtys() { return quantities; };

        // other methods
        bool addItem(string item, int qty);
        bool removeItem(string item);
        bool updateItemName(string item, string newName);
        bool updateItemQty(string item, int newQty);
        void printList();
};

#endif