#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declaration
    double bundlePrice;
    int numberOfBundles;
    double totalCost;
    int choice;

    // Initialization
    bundlePrice = 79.99;
    numberOfBundles = 3;
    totalCost = 0;
    choice = 0;

    // Menu
    cout << "CELLPHONE DATA PURCHASE" << endl;
    cout << "1. Calculate cost of 3 bundles" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Selection using switch
    switch (choice)
    {
        case 1:
            // Arithmetic
            totalCost = bundlePrice * numberOfBundles;

            // Formatted output
            cout << fixed << setprecision(2);
            cout << "Total cost: R" << totalCost << endl;
            break;

        case 2:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}
