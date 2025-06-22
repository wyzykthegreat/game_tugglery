#pragma once

namespace tugglery {
	class Card
	{
		public:
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
}
