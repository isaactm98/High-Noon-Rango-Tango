#ifndef SENTINEL_H
#define SENTINEL_H
#include "card.h"

using namespace std;

class Sentinel : public Card {

public:
	void attack(Board * enemy_board, int row, int column);



};

#endif // !SENTINEL_H

