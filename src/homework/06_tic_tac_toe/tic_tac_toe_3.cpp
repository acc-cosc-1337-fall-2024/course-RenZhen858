#include "tic_tac_toe_3.h"
#ifndef tic_tac_toe_3.h
#define tic_tac_toe_3.h

#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe {
public:
    // Constructor initializes the base class with size 3
    TicTacToe3() : TicTacToe(3) {}

    // Check for a win in any column
    bool check_column_win() const override {
        for (int col = 0; col < size; ++col) {
            if (pegs[col] != " " &&
                pegs[col] == pegs[col + size] &&
                pegs[col] == pegs[col + 2 * size]) {
                return true;
            }
        }
        return false;
    }

    // Check for a win in any row
    bool check_row_win() const override {
        for (int row = 0; row < size; ++row) {
            int start_idx = row * size;
            if (pegs[start_idx] != " " &&
                pegs[start_idx] == pegs[start_idx + 1] &&
                pegs[start_idx] == pegs[start_idx + 2]) {
                return true;
            }
        }
        return false;
    }

    // Check for a diagonal win
    bool check_diagonal_win() const override {
        if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8]) {
            return true;
        }
        if (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6]) {
            return true;
        }
        return false;
    }
};

#endif // TICTACTOE3_H

