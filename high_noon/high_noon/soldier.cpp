#include "soldier.h"

void Soldier::attack(Board * enemy_board, int row, int column){
	Card * defending_card = enemy_board->get_card(row, column);
	string enemy_suit = defending_card->get_suit();
	int enemy_value = defending_card->get_value();
	if (enemy_suit == "Sentinel") {
		alive = false;//soldier card automatically loses against sentinels
	}
	if (enemy_suit == "Builder") {
		defending_card->set_alive(false);//solider card automatically wins against builder and cannot lose
		return;
	}
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died
			alive = false;
		}
		defending_card->set_alive(false);
		return;
	}
	else {
		alive = false;//soldier card's value was lower - died
		defending_card->set_alive(true); //defending card survived
	}
}

void Soldier::special_abiliity(Board * enemy_board1, int row1, int column1, Board * enemy_board2, int row2, int column2){

}
