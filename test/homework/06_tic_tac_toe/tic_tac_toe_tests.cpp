#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include <cassert>
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

void test_game_over_if_9_slots_are_selected() {
    TicTacToe game;
    game.start_game("X");

    // Marking the board
    game.mark_board(1);
    assert(game.game_over() == false);
    game.mark_board(2);
    assert(game.game_over() == false);
    game.mark_board(3);
    assert(game.game_over() == false);
    game.mark_board(4);
    assert(game.game_over() == false);
    game.mark_board(5);
    assert(game.game_over() == false);
    game.mark_board(6);
    assert(game.game_over() == false);
    game.mark_board(7);
    assert(game.game_over() == false);
    game.mark_board(8);
    assert(game.game_over() == false);
    game.mark_board(9);
    assert(game.game_over() == true); // All slots filled

    std::cout << "Test passed: Game over when all slots are selected." << std::endl;
}

int main() {
    test_game_over_if_9_slots_are_selected();
    return 0;
}