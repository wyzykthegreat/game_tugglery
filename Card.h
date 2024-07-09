#ifndef CARD_H
#define CARD_H

#pragma once 

class Card
{
public:
    // Konstruktor i destrukor
    Card(int value, char suit);
    ~Card();

    // Metoda dostępu do wartości karty
    int getValue() const;
    
    // Metoda dostępu do koloru karty
    int getSuit() const;

private:
    int value;
    char suit;
}

#endif
