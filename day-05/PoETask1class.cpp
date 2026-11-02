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
    if (pr >= 0 && pr <= 120)
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


// Main function
int main()
{
    Product p1;  // Creating an object

    p1.setProduct("Cigarette", 35.00, 10);

    cout << "PRODUCT DETAILS" << endl;
    cout << "Product Name: " << p1.getName() << endl;
    cout << "Price: R" << p1.getPrice() << endl;
    cout << "Quantity in Stock: " << p1.getQuantityInStock() << endl;

    return 0;
}
