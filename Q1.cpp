#include <iostream>
using namespace std;

struct Item {
    int id;
    float cost;
};

int main() {
    Item items[6];
 
    for(int i = 0; i < 6; ++i) {
        cout << "Enter ID for item " << i+1 << ": ";
        cin >> items[i].id;
        cout << "Enter cost for item " << i+1 << ": ";
        cin >> items[i].cost;
    }
 
    cout << "\nItems with cost greater than 50.00:\n";
    for(int i = 0; i < 6; ++i) {
        if(items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }
    return 0;
}
