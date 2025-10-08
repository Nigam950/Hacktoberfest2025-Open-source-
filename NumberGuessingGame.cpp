#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, tries = 0;

    cout << "Guess a number between 1 and 100:\n";

    do {
        cout << "Enter guess: ";
        cin >> guess;
        tries++;
        if (guess > number)
            cout << "Too high!\n";
        else if (guess < number)
            cout << "Too low!\n";
        else
            cout << "Correct! You guessed it in " << tries << " tries.\n";
    } while (guess != number);

    return 0;
}
