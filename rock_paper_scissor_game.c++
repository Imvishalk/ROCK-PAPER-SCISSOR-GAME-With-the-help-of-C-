#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(0)); 

    int player_Choice;
    int computer_Choice;

    cout << "Let's play Rock, Paper, Scissors!\n";
    cout << "1.Rock\n2.Paper\n3.Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> player_Choice;

 if (player_Choice < 1 || player_Choice > 3) {
        cout << "Invalid choice. Please choose a number between 1 and 3.\n";
        return 1; 
    }

    computer_Choice = rand() % 3 + 1;

    cout << "Computer chose: ";
    switch (computer_Choice) {
        case 1:
            cout << "Rock\n";
            break;
        case 2:
            cout << "Paper\n";
            break;
        case 3:
            cout << "Scissors\n";
            break;
    }

    cout << "player chose: ";
    switch (player_Choice) {
        case 1:
            cout << "Rock\n";
            break;
        case 2:
            cout << "Paper\n";
            break;
        case 3:
            cout << "Scissors\n";
            break;
    }

    if (player_Choice == computer_Choice) {
        cout << "It's a tie! play again!\n";
    } 
    
    else if (
        (player_Choice == 1 && computer_Choice == 3) ||
        (player_Choice == 2 && computer_Choice == 1) ||
        (player_Choice == 3 && computer_Choice == 2) 
    ) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
 