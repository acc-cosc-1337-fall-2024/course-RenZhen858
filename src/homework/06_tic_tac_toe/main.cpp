#include <iostream>
#include "tic_tac_toe.h"

int main() {
    char play_again;
    do {
        std::string first_player;
        do {
            std::cout << "Choose first player (X or O): ";
            std::cin >> first_player;
        } while (first_player != "X" && first_player != "O");

        TicTacToe game;
        game.start_game(first_player);
        while (!game.game_over()) {
            game.display_board();
            int position;
            std::cout << "Player " << game.get_player() << ", enter your move (1-9): ";
            std::cin >> position;
            game.mark_board(position);
        }
        
        game.display_board();
        std::cout << "Winner: " << game.get_winner() << std::endl;
        
        std::cout << "Play again? (y/n): ";
        std::cin >> play_again;
    } while (play_again == 'y' || play_again == 'Y');

    return 0;
}
