#include "assassin.h"

void Assassin::attack(Board * enemy_board, int row, int column){
	Card * defending_card = enemy_board->get_card(row, column);
	string enemy_suit = defending_card->get_suit();
	int enemy_value = defending_card->get_value();
	if (enemy_suit == "Builder") {
		alive = false;//assassin card automatically loses against builders
	}
	if (enemy_suit == "Sentinel") {
		defending_card->set_alive(false);//assassin card automatically wins against builder and cannot lose
		return;
	}
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died as equivalency means death for both
			alive = false;
		}
		defending_card->set_alive(false);
		return;
	}
	else {
		alive = false;//assassin card's value was lower - died
		defending_card->set_alive(true);//defending card survived
	}
}

void Assassin::special_ability(Board* enemy_board, int row, int column){
	Card* enemy_card = enemy_board->get_card(row, column);
	enemy_card->set_revealed_true();
}
