// code for rock, paper, scizzor side.
#include "rps_game.h"
using namespace std;

RockPaperScissors::RockPaperScissors(const string& opponentName) : opponent(opponentName) {
    srand(time(0));
}

void RockPaperScissors::playRound() {
    userChoice = getUserChoice();
    opponentChoice = rand() % 3 + 1;

    printChoices();
    determineWinner();
}

int RockPaperScissors::getUserChoice() {
    int choice;
    do {
        cout << "Enter your choice (1: Rock, 2: Paper, 3: Scissors): ";
        cin >> choice;
    } while (choice < 1 || choice > 3);

    return choice;
}

void RockPaperScissors::printChoices() {
    cout << "You chose: " << userChoice << "\t" << opponent << " chose: " << opponentChoice << endl;
}

void RockPaperScissors::determineWinner() {
    if (userChoice == opponentChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 1 && opponentChoice == 3) || (userChoice == 2 && opponentChoice == 1) || (userChoice == 3 && opponentChoice == 2)) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}
