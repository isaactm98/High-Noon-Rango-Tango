#ifndef BLACK_JOKER_H
#define BLACK_JOKER_H
#include "card.h"
#include "board.h"

using namespace std;

class BlackJoker : public Card {
public:
	bool attack(int enemy_value, string enemy_suit);
	void special_ability(Board* enemy_board, int row, int column);
};
#endif // !BLACK_JOKER_H

