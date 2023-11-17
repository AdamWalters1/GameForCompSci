// header file for game
#ifndef RPS_GAME_H
#define RPS_GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

class RockPaperScissors {
public:
    RockPaperScissors(const std::string& opponentName);
    void playRound();

private:
    std::string opponent;
    int userChoice;
    int opponentChoice;

    int getUserChoice();
    void printChoices();
    void determineWinner();
};

#endif // RPS_GAME_H
