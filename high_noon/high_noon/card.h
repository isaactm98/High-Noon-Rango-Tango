#ifndef CARD_H
#define CARD_H
#include<string>
#include<iostream>

using namespace std;

class Card{

public:
	Card();
	Card(string suit_of_card, int value_of_card);

	// returns whether defender dies and set alive bool of attacker to false if necessary
	virtual bool attack(int enemy_value, string enemy_suit) = 0; 
	void execute_attack(int enemy_value, string enemy_suit);
	virtual void special_ability() = 0;
	void execute_special_ability();
	void quick_mod();

	string get_suit() { return suit; };
	int get_value() { return value; }
	bool get_revealed() { return revealed; }
	void set_revealed_true() { revealed = true; }
	void set_alive(bool results_of_attack) { alive = results_of_attack; }

	const int MAX_CARD_VALUE = 11;

protected:
	bool revealed;
	bool quick_modded;
	bool used_ability;
	bool alive;
	string suit;
	int value;

};
#endif