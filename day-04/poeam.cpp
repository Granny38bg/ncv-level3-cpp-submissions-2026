#include <iostream>
using namespace std;

// Function to enter two numbers
void userNumbers(int &num1, int &num2)
{
    cout << "Enter 2 values: ";
    cin >> num1 >> num2;
}

// Function to calculate the sum
void calSum(int sum1, int sum2)
{
    cout << "Sum = " << sum1 + sum2 << endl;
}

// Function to calculate the difference
void diffNumber(int num1, int num2)
{
    cout << "Difference = " << num1 - num2 << endl;
}

void displayProduct(int num1, int num2)
{
     cout << "Product  = " << num1 * num2 << endl;
}

void displayQuotient(int num1, int num2)
{
     cout << "Quotient  = " << num1 / num2 << endl;
}

int main()
{
    int n1, n2;

    userNumbers(n1, n2);

    calSum(n1, n2);

    diffNumber(n1, n2);
    displayProduct(n1, n2);
    displayQuotient(n1, n2);

    return 0;
}

