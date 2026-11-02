// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string gender = "F";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "Hello, " << name << endl;
    cout << "What is your gender?" << endl;
    getline(cin >> ws, gender);
    if (gender == "F") {
        cout << "You are a lovey lady." << endl;
    }
    if (gender == "M") {
        cout << "You are a clever gentleman.." << endl;
    }
    return 0;
}
