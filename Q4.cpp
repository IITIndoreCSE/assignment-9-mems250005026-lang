#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord records[12];
    cout << "Enter sales data for each month:" << endl;

    for (int i = 0; i < 12; ++i) {
        cout << "Month " << i + 1 << " Name: ";
        cin >> records[i].month;
        cout << "Sales Amount: ";
        cin >> records[i].amount;
    }

    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < 12; ++i) {
        if (records[i].amount > records[maxIndex].amount)
            maxIndex = i;
        if (records[i].amount < records[minIndex].amount)
            minIndex = i;
    }

    cout << "Month with maximum sales: " << records[maxIndex].month
         << " with amount " << records[maxIndex].amount << endl;
    cout << "Month with minimum sales: " << records[minIndex].month
         << " with amount " << records[minIndex].amount << endl;

    return 0;
}

