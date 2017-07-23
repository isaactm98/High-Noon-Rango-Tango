#include "black_joker.h"

bool BlackJoker::attack(int enemy_value, string enemy_suit){
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died as equivalency means death for both
			alive = false;
		}
		return false;
	}
	else {
		alive = false;//black joker card's value was lower - died
		return true; //defending card survived
	}
}

void BlackJoker::special_ability(Board* enemy_board, int row, int column){
	Card* card_to_give = this;
	Card* card_to_get = enemy_board->get_card(row, column);

	enemy_board->remove_card(card_to_get);
	enemy_board->add_card(card_to_give, row, column);
}
