#include "tic_tac_toe.h"
#include <iostream>

int main() 
{
	TicTacToe game;
    std::string first_player;

    std::cout << "Enter first player (X/O): ";
    std::cin >> first_player;

    game.start_game(first_player);
    
    while (true) {
        game.display_board();
        if (game.game_over()) {
            std::cout << "Game over! The board is full." << std::endl;
            std::cout << "Starting a new game..." << std::endl;
            game.start_game(first_player); // Restart game
            continue; // Go to the next iteration
        }
        
        int position;
        std::cout << "Player " << game.get_player() << ", enter position (1-9): ";
        std::cin >> position;
        
        game.mark_board(position);
    }

	return 0;
}
