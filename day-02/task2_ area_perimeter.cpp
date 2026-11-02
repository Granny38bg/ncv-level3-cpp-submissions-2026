#include<iostream>
using namespace std;

int main(){

float length, breadth;


cout<< "Please enter your length: "<< length<< endl;
cin>> length;
cout<< "Please enter your breadth: "<< breadth<< endl;
cin>> breadth;

float area = length * breadth;
float perimeter = 2 * length + 2 * breadth;

cout<< "Your area is : "<< area<<endl;
cout<< "Your perimater is : "<< perimeter<<endl;



return 0;
}
