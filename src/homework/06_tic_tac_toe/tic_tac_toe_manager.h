#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
#include <string>

class TicTacToeManager {
public:
    TicTacToeManager();  // Constructor to initialize scores
    void save_game(const TicTacToe& game);  // Save a completed game
    void get_winner_total(int& xWins, int& oWins, int& ties) const;  // Get the total scores
    void display_history() const;  // Display all the games in history

private:
    std::vector<TicTacToe> games;  // Vector to store all games
    int x_win;  // Track X wins
    int o_win;  // Track O wins
    int ties;    // Track ties

    void update_winner_count(const std::string& winner);  // Update scores based on winner
};

#endif // TIC_TAC_TOE_MANAGER_H
