#include "card.h"

Card::Card(){
	suit = "FAIL TO INITIALIZE";
	value = -1;
	revealed = false;
	quick_modded = false;
	used_ability = false;
	alive = false;
}

Card::Card(string suit_of_card, int value_of_card){
	suit = suit_of_card;
	value = value_of_card;
	revealed = false;
	quick_modded = false;
	used_ability = false;
	alive = true;
}

void Card::execute_attack(int enemy_value, string enemy_suit){
	set_revealed_true();//When a card is attacked, it is revealed. 
	this->attack(enemy_value, enemy_suit);
}

void Card::execute_special_ability(){
	this->special_ability();
}

void Card::quick_mod(){
	if (quick_modded == true){
		cout << "Card has already been quick-modded.\n";
	}
	else 
	{
		value += 2;
		if (value > MAX_CARD_VALUE){
			value = MAX_CARD_VALUE;
		}
		quick_modded = true;
	}
	
}

void Card::print_card(){
	cout << value << " of " << suit;
}

