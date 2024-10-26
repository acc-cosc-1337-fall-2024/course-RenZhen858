//h
#include <vector>
#include <string>
#include <iostream>

class TicTacToe {
public:
    bool game_over();
    void start_game(const std::string& first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();

    std::string player;
    std::vector<std::string> pegs = std::vector<std::string>(9, " ");
};
