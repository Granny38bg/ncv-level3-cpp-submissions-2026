#include <iostream>
#include<ctime>
using namespace std;


// Function to calculate the sum
int calSum(int num1, int num2)
{
  return num1 + num2;
}
// Function to calculate the difference
int displaydifference(int num1, int num2)
{
     return num1 - num2;
}

int displayProduct(int num1, int num2)
{
     return num1 * num2;
}

int displayQuotient(int num1, int num2)
{
    return num1 / num2;
}

int main()
{
    int n1 = rand()% 50 + 1;
    int n2 = rand()% 50 + 1;
    char displayOperator;

    cout<< "Enter the operator that you want to use:"<<endl;
    cin>> displayOperator;

switch(displayOperator)
{
case'+':
    cout<<n1<<" + "<<n2<<" = "<<calSum(n1,n2)<<endl;
    break;
case'-':
    break;
    cout<<n1<<" - "<<n2<<" = "<<displaydifference(n1,n2)<<endl;
case'*':
    break;
    cout<<n1<<" * "<<n2<<" = "<<displayProduct(n1,n2)<<endl;
    break;
case '/':
    cout<<n1<<" / "<<n2<<" = "<<displayQuotient(n1,n2)<<endl;
    break;
}



    return 0;
}
