#include "ItemToPurchase.h"
#include <iostream>
#include <string>
using namespace std;

ItemToPurchase::ItemToPurchase() {      // default constructor
    _name = "none";
    _price = 0;
    _quantity = 0;
    _description = "none";
}

ItemToPurchase::ItemToPurchase(string nm, string desc, int p, int quan) {
    _name = nm;
    _description = desc;
    _price = p;
    _quantity = quan;
}

void ItemToPurchase::setName(string nm) {       // sets name of item
    _name = nm;
}

void ItemToPurchase::setPrice(int p){       // sets price of item
    _price = p;
}

void ItemToPurchase::setQuantity(int quan) {        // sets quantity of item
    _quantity = quan;
}

void ItemToPurchase::setDescription(string desc) {      // sets description of item
    _description = desc;
}

string ItemToPurchase::name() const {       // returns name of item
    return _name;
}

int ItemToPurchase::price() const {     // returns price of item
    return _price;
}

int ItemToPurchase::quantity() const {         // returns quantity of item
    return _quantity;
}

string ItemToPurchase::description() const {        // returns description of item
    return _description;
}

void ItemToPurchase::printItemCost() const {        // prints out item's cost
    int p = price();
    int q = quantity();
    string n = name();
    int totalCost = p * q;
    cout << n << " " << q << " @ $" << price() << " = $" << totalCost;
}

void ItemToPurchase::printItemDescription() const {         // prints out description of item
    cout << name() << ": " << description();
}
