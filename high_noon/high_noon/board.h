#ifndef BOARD_H
#define BOARD_H
#include "card.h"

using namespace std;

class Board {
public:
	Card* get_card(int row, int column);
	void print_card(int row, int column);
	void move_card(int initial_row, int initial_column, int final_row, int final_column);
	void add_card(Card* card_to_add, int row, int column);
	void remove_card(Card* card_to_remove);
	void print_board();

	~Board();

private:
	Card* board[2][3] = { {nullptr} };// board is a max of two rows, 3 columns
};

#endif // !BOARD_H




