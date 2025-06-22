#ifndef PLAYER_H
#define PLAYER_H

#pragma once

#include <vector>
#include "Card.h"

class Player
{
public:
    //Konstruktor i destruktor
    Player(int playerNumber);
    ~Player();

    // Metody dostępu
    int getPlayerNumber() const;

    // Podstawowe operacje na kartach
    std::vector<Card> getHand() const;
    bool addCard(const Card& c);
    bool removeCard(const Card& c);

    // Podstawowe operacje na kartach ujemnych
    std::vector<Card> getNegativePointCards() const;
    bool addNegativePointCard(const Card& c);

    // Sprawdzenie czy pozostały jakieś tokeny
    bool removeToken();

private:
    std::vector<Card> hand;
    std::vector<Card> negativePointCards;
    int playerNumber;
    int tokensLeft;

};

#endif