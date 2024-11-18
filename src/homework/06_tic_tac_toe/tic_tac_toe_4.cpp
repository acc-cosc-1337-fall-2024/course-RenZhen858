#ifndef TICTACTOE4_H
#define TICTACTOE4_H

#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe {
public:
    // Constructor initializes the base class with size 4
    TicTacToe4() : TicTacToe(4) {}

    // Check for a win in any column
    bool check_column_win() const override {
        for (int col = 0; col < size; ++col) {
            for (int row = 0; row < size - 3; ++row) {
                int idx = row * size + col;
                if (pegs[idx] != " " && pegs[idx] == pegs[idx + size] &&
                    pegs[idx] == pegs[idx + 2 * size] && pegs[idx] == pegs[idx + 3 * size]) {
                    return true;
                }
            }
        }
        return false;
    }

    // Check for a win in any row
    bool check_row_win() const override {
        for (int row = 0; row < size; ++row) {
            for (int col = 0; col < size - 3; ++col) {
                int idx = row * size + col;
                if (pegs[idx] != " " && pegs[idx] == pegs[idx + 1] &&
                    pegs[idx] == pegs[idx + 2] && pegs[idx] == pegs[idx + 3]) {
                    return true;
                }
            }
        }
        return false;
    }

    // Check for a diagonal win
    bool check_diagonal_win() const override {
        for (int row = 0; row < size - 3; ++row) {
            for (int col = 0; col < size - 3; ++col) {
                int idx = row * size + col;
                if (pegs[idx] != " " && pegs[idx] == pegs[idx + size + 1] &&
                    pegs[idx] == pegs[idx + 2 * (size + 1)] && pegs[idx] == pegs[idx + 3 * (size + 1)]) {
                    return true;
                }
                idx = row * size + (col + 3);
                if (pegs[idx] != " " && pegs[idx] == pegs[idx + size - 1] &&
                    pegs[idx] == pegs[idx + 2 * (size - 1)] && pegs[idx] == pegs[idx + 3 * (size - 1)]) {
                    return true;
                }
            }
        }
        return false;
    }
};

#endif // TICTACTOE4_H

