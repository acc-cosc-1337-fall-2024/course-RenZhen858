#include <iostream>
#include <memory>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

int main() {
    TicTacToeManager manager;
    std::unique_ptr<TicTacToe> game;

    // Prompt the user to select TicTacToe3 or TicTacToe4
    std::cout << "Choose Game (1 for TicTacToe 3x3, 2 for TicTacToe 4x4): ";
    int choice;
    std::cin >> choice;

    // Create the selected game type
    if (choice == 1) {
        game = std::make_unique<TicTacToe3>();  // 3x3 Game
    } else if (choice == 2) {
        game = std::make_unique<TicTacToe4>();  // 4x4 Game
    } else {
        std::cout << "Invalid choice!" << std::endl;
        return 1;
    }

    // Example game logic (you can expand this part to handle moves and display results)
    game->display_board();
    
    // Dereference the unique_ptr to pass the reference to the save_game method
    manager.save_game(std::move(game));  // Move the unique_ptr (since we can't copy it)
    
    manager.display_all_games();

    return 0;
}
