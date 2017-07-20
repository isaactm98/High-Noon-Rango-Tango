#include "sentinel.h"

bool Sentinel::attack(int enemy_value, string enemy_suit)
{
	if (enemy_suit == "Assassin") {
		alive = false;//sentinel card automatically loses against assassins
	}
	if (enemy_suit == "Soldier") {
		return false;//sentinel card automatically wins against builder and cannot lose
	}
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died as equivalency means death for both
			alive = false;
		}
		return false;
	}
	else {
		alive = false;//sentinel card's value was lower - died
		return true; //defending card survived
	}
}
