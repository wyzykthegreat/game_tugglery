#include "Card.hpp"

namespace tugglery {
	
	Card::Card(int value, char suit) : value_(value), suit_(suit) {}

	Card::getValue() const {
    	return value_;
	}

	Card::getSuit() const {
    	return suit_;
	}


}
