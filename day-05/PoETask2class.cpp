
#include <iostream>
#include <string>
using namespace std;

class Product  // Definition section
{
private:
    string name;
    double price;
    int quantityInStock;

public:
    // Default constructor
    Product();

    // Parameterised constructor
    Product(string nm, double pr, int qs);

    // Setter function
    void setProduct(string nm, double pr, int qs);

    // Getter functions
    string getName();
    double getPrice();
    int getQuantityInStock();
};

// Class implementation section

// Default constructor
Product::Product()
{
    name = "Unknown";
    price = 0;
    quantityInStock = 0;
}

// Parameterised constructor
Product::Product(string nm, double pr, int qs)
{
    setProduct(nm, pr, qs);
}

// Setter function
void Product::setProduct(string nm, double pr, int qs)
{
    name = nm;

    // Price validation
    if (pr >= 0 && pr <= 10000)
        price = pr;
    else
        price = 0;

    // Quantity validation
    if (qs >= 0 && qs <= 1000)
        quantityInStock = qs;
    else
        quantityInStock = 0;
}

// Getter functions
string Product::getName()
{
    return name;
}

double Product::getPrice()
{
    return price;
}

int Product::getQuantityInStock()
{
    return quantityInStock;
}

// Function to capture product information
void getProductData(Product &pd)
{
    string nm;
    double pr;
    int qs;

    cout << "Enter product name: ";
    cin >> nm;

    cout << "Enter the price: ";
    cin >> pr;

    cout << "Enter the quantity in stock: ";
    cin >> qs;

    pd.setProduct(nm, pr, qs);
}

// Function to display product information
void displayProduct(Product &pd)
{
    cout << "\nPRODUCT DETAILS" << endl;
    cout << "Product Name: " << pd.getName() << endl;
    cout << "Price: R" << pd.getPrice() << endl;
    cout << "Quantity in Stock: "
         << pd.getQuantityInStock() << endl;
}

// Function to compare the first characters
void prodCompare()
{
    string product1;
    string product2;

    cout << "\nEnter the first product: ";
    cin >> product1;

    cout << "Enter the second product: ";
    cin >> product2;

    if (product1[0] == product2[0])
        cout << "The first characters are the same." << endl;
    else
        cout << "The first characters are not the same." << endl;
}

// Main function
int main()
{
    Product p1;

    getProductData(p1);

    displayProduct(p1);

    prodCompare();

    return 0;
}
