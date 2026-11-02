#include<iostream>
#include<string>

using namespace std;

int main(){
    string name = "";
    string gender = "";
    cout << "What is your name?"<< endl;
    getline (cin>>ws, name);
    cout << "What is your gender?"<< endl;
    getline (cin>>ws, gender);
    cout << "Hello, "<< name << endl;
    if (gender == "M"){
        cout <<"You are a clear man"<< endl;
    }
    if (gender == "F"){
        cout<< "You are a lovey lady"<<endl;
    }

    return 0;

    }
