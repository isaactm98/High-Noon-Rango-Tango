#ifndef ASSASSIN_H
#define ASSASSIN_H
#include "card.h"

using namespace std;

class Assassin : public Card {

public:
	bool attack(int enemy_value, string enemy_suit);



};

#endif // !ASSASSIN_H
