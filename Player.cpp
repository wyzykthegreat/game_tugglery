#include "Player.h"

//Na szybko wygenerowane przez chat, trzeba poprawić logike

// Konstruktor
Player::Player(int playerNumber) : playerNumber(playerNumber), tokensLeft(0) {}

// Metody dostępu
int Player::getPlayerNumber() const {
    return playerNumber;
}

// Podstawowe operacje na kartach
std::vector<Card> Player::getHand() const {
    return hand;
}

bool Player::addCard(const Card& c) {
    hand.push_back(c);
    return true;
}

bool Player::removeCard(const Card& c) {
    for (auto it = hand.begin(); it != hand.end(); ++it) {
        if (*it == c) {
            hand.erase(it);
            return true;
        }
    }
    return false;
}

// Podstawowe operacje na kartach ujemnych
std::vector<Card> Player::getNegativePointCards() const {
    return negativePointCards;
}

bool Player::addNegativePointCard(const Card& c) {
    negativePointCards.push_back(c);
    return true;
}

// Sprawdzenie czy pozostały jakieś tokeny
bool Player::removeToken() {
    if (tokensLeft > 0) {
        --tokensLeft;
        return true;
    }
    return false;
}
