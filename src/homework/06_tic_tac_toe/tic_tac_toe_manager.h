#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

#include <memory>
#include <vector>
#include <iostream>
#include "tic_tac_toe.h"

class TicTacToeManager {
private:
    std::vector<std::unique_ptr<TicTacToe>> games;  // Stores unique_ptr to games

public:
    // Save a game (takes ownership of the game)
    void save_game(std::unique_ptr<TicTacToe> game) {
        games.push_back(std::move(game));
    }

    // Display all the games played
    void display_all_games() const {
        for (const auto& game : games) {
            game->display_board();  // Dereferencing the unique_ptr to call member functions
            std::cout << "-----------------------------------" << std::endl;
        }
    }
};

#endif // TICTACTOEMANAGER_H
