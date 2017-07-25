#ifndef ASSASSIN_H
#define ASSASSIN_H
#include "card.h"

using namespace std;

class Assassin : public Card {

public:
	void attack(Board * enemy_board, int row, int column);
	void special_ability(Board* enemy_board, int row, int column);


};

#endif // !ASSASSIN_H
