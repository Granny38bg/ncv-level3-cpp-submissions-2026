
#include <iostream>
using namespace std;

const int SIZE = 5;

// Function to display all values in the array
void displayArray(int day1[])
{
    cout << "\nValues stored inside the array:" << endl;

    for (int x = 0; x < SIZE; x++)
    {
        cout << day1[x] << " ";
    }

    cout << endl;
}

// Function to count even numbers
void countEvenNumbers(int day1[])
{
    int count = 0;

    for (int x = 0; x < SIZE; x++)
    {
        if (day1[x] % 2 == 0)
        {
            count++;
        }
    }

    cout << "Number of even numbers = "
         << count << endl;
}

// Function to count odd numbers
void countOddNumbers(int day1[])
{
    int count = 0;

    for (int x = 0; x < SIZE; x++)
    {
        if (day1[x] % 2 != 0)
        {
            count++;
        }
    }

    cout << "Number of odd numbers = "
         << count << endl;
}

// Function to sort the array in ascending order
void sortArray(int day1[])
{
    int ascend;

    for (int x = 0; x < SIZE - 1; x++)
    {
        for (int y = 0; y < SIZE - 1 - x; y++)
        {
            if (day1[y] > day1[y + 1])
            {
                ascend = day1[y];
                day1[y] = day1[y + 1];
                day1[y + 1] =ascend;
            }
        }
    }
}

// Function to display sorted values
void displaySortedArray(int day1[])
{
    cout << "\nValues sorted in ascending order:"
         << endl;

    for (int x = 0; x < SIZE; x++)
    {
        cout << day1[x] << " ";
    }

    cout << endl;
}

int main()
{
    int day1[SIZE];

    // Get values from the user
    for (int x = 0; x < SIZE; x++)
    {
        cout << "Enter day1 " << x + 1 << ": ";
        cin >> day1[x];
    }

    // Call all functions
    displayArray(day1);
    countEvenNumbers(day1);
    countOddNumbers(day1);
    sortArray(day1);
    displaySortedArray(day1);

    return 0;
}
