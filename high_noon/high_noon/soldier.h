#ifndef SOLDIER_H
#define SOLDIER_H
#include "card.h"

using namespace std;

class Soldier : public Card {

public:
	void attack(Board * enemy_board, int row, int column);
	void special_abiliity(Board* enemy_board1, int row1, int column1, Board* enemy_board2, int row2, int column2);


};

#endif // !SOLDIER_H

