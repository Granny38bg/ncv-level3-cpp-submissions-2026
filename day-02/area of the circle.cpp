//The program calculates the area of the circle
#include<iostream>
#include<math.h>
using namespace std;

int main(){

float radius, area;
const double PI = 3.41;

cout<< "Please enter your radius: "<< radius<< endl;
cin>> radius;
area = PI * radius * radius;
cout<< "Your area is : "<< area<<endl;

return 0;
}
