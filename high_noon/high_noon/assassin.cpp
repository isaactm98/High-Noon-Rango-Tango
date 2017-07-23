#include "assassin.h"

bool Assassin::attack(int enemy_value, string enemy_suit){
	if (enemy_suit == "Builder") {
		alive = false;//assassin card automatically loses against builders
	}
	if (enemy_suit == "Sentinel") {
		return false;//assassin card automatically wins against builder and cannot lose
	}
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died as equivalency means death for both
			alive = false;
		}
		return false;
	}
	else {
		alive = false;//assassin card's value was lower - died
		return true; //defending card survived
	}
}
