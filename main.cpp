// main code program to run
#include "rps_game.h"

int main() {
    RockPaperScissors game("Computer");

    for (int i = 0; i < 3; ++i) {
        game.playRound();
    }

    return 0;
}

