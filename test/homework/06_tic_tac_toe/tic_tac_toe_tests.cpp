#include <iostream>
#include <memory>
#include <cassert>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

// Function to print test result
void print_test_result(const std::string& test_name, bool result) {
    std::cout << test_name << ": " << (result ? "PASS" : "FAIL") << std::endl;
}

// Test cases for TicTacToe3
void test_win_by_first_row_3() {
    std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe3>();
    // Player X moves
    board->place_move(0, "X");
    board->place_move(1, "X");
    board->place_move(2, "X");

    bool result = board->check_row_win();
    print_test_result("Test win by first row 3", result);
    assert(result);  // First row should have a win
}

void test_win_by_first_column_3() {
    std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe3>();
    // Player O moves
    board->place_move(0, "O");
    board->place_move(3, "O");
    board->place_move(6, "O");

    bool result = board->check_column_win();
    print_test_result("Test win by first column 3", result);
    assert(result);  // First column should have a win
}

void test_diagonal_win_3() {
    std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe3>();
    // Player X moves
    board->place_move(0, "X");
    board->place_move(4, "X");
    board->place_move(8, "X");

    bool result = board->check_diagonal_win();
    print_test_result("Test diagonal win from top-left to bottom-right 3", result);
    assert(result);  // Diagonal should have a win
}

void test_board_is_full_3() {
    std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe3>();

    // Fill the board (no winner)
    board->place_move(0, "X");
    board->place_move(1, "O");
    board->place_move(2, "X");
    board->place_move(3, "O");
    board->place_move(4, "X");
    board->place_move(5, "O");
    board->place_move(6, "X");
    board->place_move(7, "O");
    board->place_move(8, "X");

    bool result = board->is_full();
    print_test_result("Test board is full 3", result);
    assert(result);  // Board should be full
}

// Test cases for TicTacToe4
void test_win_by_first_row_4() {
    std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe4>();
    // Player X moves
    board->place_move(0, "X");
    board->place_move(1, "X");
    board->place_move(2, "X");
    board->place_move(3, "X");

    bool result = board->check_row_win();
    print_test_result("Test win by first row 4", result);
    assert(result);  // First row should have a win
}

void test_win_by_first_column_4() {
    std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe4>();
    // Player O moves
    board->place_move(0, "O");
    board->place_move(4, "O");
    board->place_move(8, "O");
    board->place_move(12, "O");

    bool result = board->check_column_win();
    print_test_result("Test win by first column 4", result);
    assert(result);  // First column should have a win
}

void test_diagonal_win_4() {
    std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe4>();
    // Player X moves
    board->place_move(0, "X");
    board->place_move(5, "X");
    board->place_move(10, "X");
    board->place_move(15, "X");

    bool result = board->check_diagonal_win();
    print_test_result("Test diagonal win from top-left to bottom-right 4", result);
    assert(result);  // Diagonal should have a win
}

void test_board_is_full_4() {
    std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe4>();

    // Fill the board (no winner)
    board->place_move(0, "X");
    board->place_move(1, "O");
    board->place_move(2, "X");
    board->place_move(3, "O");
    board->place_move(4, "X");
    board->place_move(5, "O");
    board->place_move(6, "X");
    board->place_move(7, "O");
    board->place_move(8, "X");
    board->place_move(9, "O");
    board->place_move(10, "X");
    board->place_move(11, "O");
    board->place_move(12, "X");
    board->place_move(13, "O");
    board->place_move(14, "X");
    board->place_move(15, "O");

    bool result = board->is_full();
    print_test_result("Test board is full 4", result);
    assert(result);  // Board should be full
}

int main() {
    // Run the tests for TicTacToe3
    test_win_by_first_row_3();
    test_win_by_first_column_3();
    test_diagonal_win_3();
    test_board_is_full_3();

    // Run the tests for TicTacToe4
    test_win_by_first_row_4();
    test_win_by_first_column_4();
    test_diagonal_win_4();
    test_board_is_full_4();

    std::cout << "All tests completed." << std::endl;
    return 0;
}
