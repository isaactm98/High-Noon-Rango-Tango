#include "sentinel.h"

void Sentinel::attack(Board * enemy_board, int row, int column){
	Card * defending_card = enemy_board->get_card(row, column);
	string enemy_suit = defending_card->get_suit();
	int enemy_value = defending_card->get_value();
	if (enemy_suit == "Assassin") {
		alive = false;//sentinel card automatically loses against assassins
		return;
	}
	if (enemy_suit == "Soldier") {
		defending_card->set_alive(false);//sentinel card automatically wins against builder and cannot lose
		return;
	}
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died as equivalency means death for both
			alive = false;
		}
		defending_card->set_alive(false);
	}
	else {
		alive = false;//sentinel card's value was lower - died
		defending_card->set_alive(true); //defending card survived
	}
}
