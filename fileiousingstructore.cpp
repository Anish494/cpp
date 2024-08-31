//program to add n records and sort according to id using dynamic memory allocation

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    // Allocate dynamic memory for inventory
    Item* inventory = new Item[n];

    // Input items
    for (int i = 0; i < n; i++) {
        cout << "Enter ID of item " << i + 1 << ": ";
        cin >> inventory[i].id;
        cin.ignore();  // Ignore the newline character left in the buffer
        cout << "Enter name of item " << i + 1 << ": ";
        getline(cin, inventory[i].name);
    }

    // Write items to file
    ofstream outfile("inventory.txt");
   
    for (int i = 0; i < n; i++) {
        outfile << inventory[i].id << ' ' << inventory[i].name << endl;
    }
    outfile.close();

    // Reallocate dynamic memory for retrieval
    delete[] inventory;
    inventory = new Item[n];

    // Read items from file
    ifstream infile("inventory.txt");
   
    for (int i = 0; i < n; i++) {
        infile >> inventory[i].id;
        infile.ignore();  // Ignore the newline character
        getline(infile, inventory[i].name);
    }
    infile.close();

    // Sort items by ID using Bubble Sort
    Item temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (inventory[i].id > inventory[j].id) {
                temp = inventory[i];
                inventory[i] = inventory[j];
                inventory[j] = temp;
            }
        }
    }

    // Output sorted items
    cout << "\nSorted Inventory:\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << inventory[i].id << ", Name: " << inventory[i].name << endl;
    }

    // Free dynamically allocated memory
    delete[] inventory;

    return 0;
}
