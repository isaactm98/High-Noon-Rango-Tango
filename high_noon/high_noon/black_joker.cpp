#include "black_joker.h"

void BlackJoker::attack(Board * enemy_board, int row, int column){
	Card * defending_card = enemy_board->get_card(row, column);
	string enemy_suit = defending_card->get_suit();
	int enemy_value = defending_card->get_value();
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died as equivalency means death for both
			alive = false;
		}
		defending_card->set_alive(false);
	}
	else {
		alive = false;//black joker card's value was lower - died
		defending_card->set_alive(true); //defending card survived
	}
}

void BlackJoker::special_ability(Board* enemy_board, int row, int column){
	Card* card_to_give = this;
	Card* card_to_get = enemy_board->get_card(row, column);

	enemy_board->remove_card(card_to_get);
	enemy_board->add_card(card_to_give, row, column);
}
