#include "Card.h"

Card::Card(int value, char suit) : value(value), suit(suit) {}

int Card::getValue() const {
    return value;
}

char Card::getSuit() const {
    return suit;
}
