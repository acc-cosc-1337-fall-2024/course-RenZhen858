#include "tic_tac_toe_manager.h"
#include <iostream>

TicTacToeManager::TicTacToeManager() : x_win(0), o_win(0), ties(0) {}

void TicTacToeManager::save_game(const TicTacToe& game) {
    games.push_back(game);  // Add the game to history
    update_winner_count(game.get_winner());  // Update scores based on winner
}

void TicTacToeManager::get_winner_total(int& xWins, int& oWins, int& tiesTotal) const {
    xWins = x_win;
    oWins = o_win;
    tiesTotal = ties;
}

void TicTacToeManager::display_history() const {
    for (const auto& game : games) {
        std::cout << game << std::endl;  // Assuming overloaded << operator in TicTacToe class
    }
}

void TicTacToeManager::update_winner_count(const std::string& winner) {
    if (winner == "X") {
        x_win++;
    } else if (winner == "O") {
        o_win++;
    } else {
        ties++;
    }
}
