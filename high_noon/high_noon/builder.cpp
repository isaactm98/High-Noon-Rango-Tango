#include "builder.h"

bool Builder::attack(int enemy_value, string enemy_suit)
{
	if (enemy_suit == "Soldier") {
		alive = false;//builder card automatically loses against soldiers
	}
	if (enemy_suit == "Assassin") {
		return false;//builder card automatically wins against builder and cannot lose
	}
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died as equivalency means death for both
			alive = false;
		}
		return false;
	}
	else {
		alive = false;//builder card's value was lower - died
		return true; //defending card survived
	}
}
