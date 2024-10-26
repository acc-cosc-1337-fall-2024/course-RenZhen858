//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over() {
    return check_board_full();
}

void TicTacToe::start_game(const std::string& first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    if (position >= 1 && position <= 9 && pegs[position - 1] == " ") {
        pegs[position - 1] = player;
        set_next_player();
    } else {
        std::cerr << "Invalid position!" << std::endl;
    }
}

std::string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    std::cout << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << std::endl;
    std::cout << "--|---|--" << std::endl;
    std::cout << pegs[3] << " | " << pegs[4] << " | " << pegs[5] << std::endl;
    std::cout << "--|---|--" << std::endl;
    std::cout << pegs[6] << " | " << pegs[7] << " | " << pegs[8] << std::endl;
}

void TicTacToe::set_next_player() {
    player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full() {
    for (const auto& peg : pegs) {
        if (peg == " ") return false;
    }
    return true;
}

void TicTacToe::clear_board() {
    std::fill(pegs.begin(), pegs.end(), " ");
}