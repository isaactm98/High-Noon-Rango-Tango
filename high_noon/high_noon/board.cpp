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

void Board::move_card(int initial_row, int initial_column, int final_row, int final_column){
	//get two cards that will be moved or if no card, nullptr
	Card* card_1_to_move = get_card(initial_row, initial_column);
	Card* card_2_to_move = get_card(final_row, final_column);

	//set board to have cards in correct position
	board[initial_row][initial_column] = card_2_to_move;
	board[final_row][final_column] = card_1_to_move;


}

void Board::add_card(Card * card_to_add, int row, int column){
	Card* check_if_null = get_card(row, column);
	bool space_is_free = true;
	//if a card is in current spot
	if (check_if_null != nullptr) {
		space_is_free = false;
		//check if there is an open spot and move current card to there
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				if (board[i][j] == nullptr) {
					//move card to open space
					move_card(row, column, i, j);
					//mark space as free
					space_is_free = true;
					break;
				}
			}
		}
		if (space_is_free == true) {
			board[row][column] = card_to_add;
		}
		else {
			cout << "Board is already full!\n";
		}
	}
}

void Board::remove_card(Card * card_to_remove){
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			//if card found, remove
			if(board[i][j] == card_to_remove)
			board[i][j] = nullptr;
		}
	}
}

void Board::print_board(){
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] != nullptr) {
				board[i][j]->print_card();
				cout << "\t";
			}
			else {
				cout << "No Card\t";
			}
		}
		cout << endl;
	}
	cout << endl;
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
