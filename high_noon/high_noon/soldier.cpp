#include "soldier.h"

bool Soldier::attack(int enemy_value, string enemy_suit){
	if (enemy_suit == "Sentinel") {
		alive = false;//soldier card automatically loses against sentinels
	}
	if (enemy_suit == "Builder") {
		return false;//solider card automatically wins against builder and cannot lose
	}
	if (value >= enemy_value) {
		if (value == enemy_value) {
			//both died
			alive = false;
		}
		return false;
	}
	else {
		alive = false;//soldier card's value was lower - died
		return true; //defending card survived
	}
}
