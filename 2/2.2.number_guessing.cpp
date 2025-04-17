#include <iostream>
#include <cstdlib>    // for rand()
#include <ctime>      // for time()
using namespace std;
int main() {
    // Initialize the random number generator
    srand(static_cast<unsigned>(time(nullptr))); // seed srand() with current time

    int secret_number = rand() % 100 + 1;          // generate a number between 1 and 100
    int guess;

    cout << "Enter your guess (1–100): ";
    cin >> guess;

    cout<<" Secret number = "<<secret_number<<" : ";

    if (guess > secret_number) {
        cout << "Too high!" << endl;
    }
    else if (guess < secret_number) {
        cout << "Too low!" << endl;
    }
    else {
        cout << "Correct! You guessed the number." << endl;
    }

    return 0;
}