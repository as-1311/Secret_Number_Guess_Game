#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    srand(time(0));
    
    cout<<"Enter minimum number output : ";
    cin>>const int minNo.;
    cout<<"Enter maximum number output : ";
    cin>>const int maxNo.;

    char playAgain;
    
    do {
        int secretNumber = rand() % (maxNo. - minNo. + 1) + minNo.;
        int attempts = 0;
        int guess;
        
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I'm thinking of a number between " << minNo. << " and " << maxNo. << "." << endl;
        
        while (true) {
            cout << "Enter your guess: ";
            if (!(cin >> guess)) {
                cout << "Invalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            
            attempts++;
            
            if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else if (guess > secretNumber) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
                break;
            }
        }
        
        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');
    
    cout << "Thanks for playing! Goodbye." << endl;
    
    return 0;
    //Anushka Sharma
}
