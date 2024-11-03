#include "tic_tac_toe.h"
#include <iostream>

TicTacToe::TicTacToe() : pegs(9, " "), winner(" ") {}

void TicTacToe::start_game(std::string first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    if (position < 1 || position > 9 || pegs[position - 1] != " ") {
        std::cerr << "Invalid move!" << std::endl;
        return;
    }
    pegs[position - 1] = player;
    if (game_over()) {
        return;
    }
    set_next_player();
}

std::string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    for (int i = 0; i < 3; ++i) {
        std::cout << pegs[i * 3] << " | " << pegs[i * 3 + 1] << " | " << pegs[i * 3 + 2] << std::endl;
        if (i < 2) std::cout << "---------\n";
    }
}

bool TicTacToe::game_over() {
    if (check_row_win() || check_column_win() || check_diagonal_win()) {
        set_winner();
        return true;
    }
    if (check_board_full()) {
        winner = "C"; // Tie
        return true;
    }
    return false;
}

std::string TicTacToe::get_winner() {
    return winner;
}

bool TicTacToe::check_column_win() {
    return (pegs[0] == pegs[3] && pegs[3] == pegs[6] && pegs[0] != " ") ||
           (pegs[1] == pegs[4] && pegs[4] == pegs[7] && pegs[1] != " ") ||
           (pegs[2] == pegs[5] && pegs[5] == pegs[8] && pegs[2] != " ");
}

bool TicTacToe::check_row_win() {
    return (pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[0] != " ") ||
           (pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[3] != " ") ||
           (pegs[6] == pegs[7] && pegs[7] == pegs[8] && pegs[6] != " ");
}

bool TicTacToe::check_diagonal_win() {
    return (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ") ||
           (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ");
}

void TicTacToe::set_winner() {
    winner = player;
}

void TicTacToe::set_next_player() {
    player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full() {
    for (const auto& peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() {
    std::fill(pegs.begin(), pegs.end(), " ");
}
