#include <iostream>
#include <random>

using namespace std;

int main() {

    random_device rd;
    mt19937 gen(rd());


    uniform_int_distribution<int> distribution(1, 20);
    int Hnum = distribution(gen);

    int guess;
    int guesscount = 0;
    int guesslimit = 5;
    bool outOfGuesses = false;

    while (Hnum != guess && !outOfGuesses) {
        if (guesscount < guesslimit) {
            cout << "Enter Guess : ";
            cin >> guess;
            guesscount++;
        } else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You Lose! The co rrect number was: " << Hnum << endl;
    } else {
        cout << "CONGRATS! You Win" << endl;
    }

    return 0;
}