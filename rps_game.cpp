// code for rock, paper, scizzor side.
#include "rps_game.h"

RockPaperScissors::RockPaperScissors(const std::string& opponentName) : opponent(opponentName) {
    std::srand(std::time(0));
}

void RockPaperScissors::playRound() {
    userChoice = getUserChoice();
    opponentChoice = std::rand() % 3 + 1;

    printChoices();
    determineWinner();
}

int RockPaperScissors::getUserChoice() {
    int choice;
    do {
        std::cout << "Enter your choice (1: Rock, 2: Paper, 3: Scissors): ";
        std::cin >> choice;
    } while (choice < 1 || choice > 3);

    return choice;
}

void RockPaperScissors::printChoices() {
    std::cout << "You chose: " << userChoice << "\t" << opponent << " chose: " << opponentChoice << std::endl;
}

void RockPaperScissors::determineWinner() {
    if (userChoice == opponentChoice) {
        std::cout << "It's a tie!" << std::endl;
    } else if ((userChoice == 1 && opponentChoice == 3) || (userChoice == 2 && opponentChoice == 1) || (userChoice == 3 && opponentChoice == 2)) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "You lose!" << std::endl;
    }
}
