#ifndef BUILDER_H
#define BUILDER_h
#include "card.h"

using namespace std;

class Builder : public Card {

public:
	bool attack(int enemy_value, string enemy_suit);



};

#endif // !BUILDER_H

