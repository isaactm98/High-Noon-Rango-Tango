#ifndef SENTINEL_H
#define SENTINEL_H
#include "card.h"

using namespace std;

class Sentinel : public Card {

public:
	bool attack(int enemy_value, string enemy_suit);



};

#endif // !SENTINEL_H

