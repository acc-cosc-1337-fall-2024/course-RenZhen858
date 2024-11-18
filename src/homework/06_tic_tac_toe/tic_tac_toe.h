#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <vector>
#include <string>
#include <iostream>

class TicTacToe {
protected:
    std::vector<std::string> pegs;  // Board representation (vector of strings)
    int size;  // Size of the grid (3 for TicTacToe3, 4 for TicTacToe4)

public:
    // Constructor initializes the board size (3x3 or 4x4)
    TicTacToe(int s) : size(s) {
        pegs.resize(s * s, " ");  // Initialize all pegs to " "
    }

    virtual ~TicTacToe() = default;

    // Pure virtual methods to be implemented by derived classes
    virtual bool check_column_win() const = 0;
    virtual bool check_row_win() const = 0;
    virtual bool check_diagonal_win() const = 0;

    // Check if the board is full (no empty spaces)
    bool is_full() const {
        for (const auto& peg : pegs) {
            if (peg == " ") {
                return false;
            }
        }
        return true;
    }

    // Display the board
    void display_board() const {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                std::cout << pegs[i * size + j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Place a move at the specified position (0-based index)
    bool place_move(int position, const std::string& player) {
        if (position >= 0 && position < size * size && pegs[position] == " ") {
            pegs[position] = player;
            return true;
        }
        return false;
    }
};

#endif // TICTACTOE_H
