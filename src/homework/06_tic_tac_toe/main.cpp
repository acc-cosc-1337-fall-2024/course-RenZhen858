#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <iostream>

int main() {
    TicTacToeManager manager;

    // Simulate playing 3 games
    TicTacToe game1, game2, game3;
    game1.play_game();
    manager.save_game(game1);

    game2.play_game();
    manager.save_game(game2);

    game3.play_game();
    manager.save_game(game3);

    // Display winner totals
    int xWins, oWins, ties;
    manager.get_winner_total(xWins, oWins, ties);
    std::cout << "X Wins: " << xWins << ", O Wins: " << oWins << ", Ties: " << ties << std::endl;

    // Display game history
    std::cout << "\nGame History:\n";
    manager.display_history();

    return 0;
}
