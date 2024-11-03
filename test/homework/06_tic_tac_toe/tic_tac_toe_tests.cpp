#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Test first player set to X") {
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.get_player() == "X");
    REQUIRE(!game.game_over());
}

TEST_CASE("Test first player set to O") {
    TicTacToe game;
    game.start_game("O");
    REQUIRE(game.get_player() == "O");
    REQUIRE(!game.game_over());
}

TEST_CASE("Test game over if 9 slots are selected.") {
    TicTacToe game;
    game.start_game("X");
    for (int i = 1; i <= 9; ++i) {
        game.mark_board(i);
        REQUIRE(game.game_over() == (i == 9)); // Should be true only after the last move
    }
    REQUIRE(game.get_winner() == "C"); // Check for tie
}

TEST_CASE("Test win by first column") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
    game.mark_board(2); // O
    game.mark_board(4);
    game.mark_board(5); // O
    game.mark_board(7); // X wins
    REQUIRE(game.game_over());
    REQUIRE(game.get_winner() == "X");
}

// Additional tests for other winning scenarios...
