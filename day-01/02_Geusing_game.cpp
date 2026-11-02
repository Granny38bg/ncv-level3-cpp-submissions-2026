// guess secret number programe
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int random(int maximum);

int random(int maximum) {
    return 1 + rand() % maximum;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    // Guess a number between 1 and 20
    int secret = random(20);
    int guess = 0;
    int tries = 0;
    cout << "I am thinking of a number from 1 to 20." << endl;
    do {
        cout << "Your guess:" << endl;
        cin >> guess;

        if (fabs(guess - secret) <= 3)   {
            cout << "Too Hot" << endl;
        } else if (fabs(guess - secret) >= 3) {
            cout << "Too Cold" << endl;
        } else {
            cout << "Correct!" << endl;
        }
        tries += 1;
    } while (guess != secret);
    cout <<" Correct " <<"  Secret no:  "<<secret << endl<< "You needed " << tries << " tries." << endl;
    return 0;
}
