#ifndef BUILDER_H
#define BUILDER_h
#include "card.h"

using namespace std;

class Builder : public Card {

public:
	void attack(Board * enemy_board, int row, int column);
	void special_ability(Board * own_board, int row, int column);


};

#endif // !BUILDER_H

