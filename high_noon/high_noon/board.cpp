#include "board.h"

Card * Board::get_card(int row, int column){
	Card * card_to_return = nullptr;
	card_to_return = board[row][column];
	return card_to_return;//check to see if this returns null or not
}

void Board::print_card(int row, int column){
	Card* card_to_print = get_card(row, column);
	//check if nullptr
	if (card_to_print == nullptr) {
		cout << "No card available\n";
	}
	else {
		cout << card_to_print->get_value() << " of " << card_to_print->get_suit() << endl;
	}
}

Board::~Board(){
	//clean up possible cards left on board
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] != nullptr) {
				delete board[i][j];
			}
		}
	}
}
