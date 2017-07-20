#ifndef SOLDIER_H
#define SOLDIER_H
#include "card.h"

using namespace std;

class Soldier : public Card {

public:
	bool attack(int enemy_value, string enemy_suit);



};

#endif // !SOLDIER_H

