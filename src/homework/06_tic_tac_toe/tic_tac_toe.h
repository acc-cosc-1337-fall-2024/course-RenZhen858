#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <iostream>
#include <vector>
#include <string>

class TicTacToe {
public:
    TicTacToe();
    void play_game();  // Method to simulate a game
    void display_board() const;
    std::string get_winner() const;  // Return the winner of the game
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

private:
    std::vector<std::vector<char>> board;
    char current_player;
    bool game_over;
    
    void switch_player();
    bool check_winner() const;
    bool check_tie() const;
};

#endif // TIC_TAC_TOE_H
