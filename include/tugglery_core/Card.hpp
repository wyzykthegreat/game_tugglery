#pragma once

#include <optional>

namespace tugglery {
	enum class Visibility {
		None,
		Owner,
		Public
	};


	class Card
	{
		public:
			Card(int value, char suit, Visibility visibility);
			
			// Metoda dostępu do wartości karty
			int getValue() const;
			
			// Metoda dostępu do koloru karty
			char getSuit() const;
			
			int getOwnerId() const;

			Visibility getVisibility() const;

			// Metoda na zmiane stanu widocznosci
			void setVisibility(
				Visibility visibility,
				std::optional<int> owner_id = std::nullopt
			);
		private:
			int value_ = 0;
			char suit_ = 'x';
			int owner_id_ = 0;
			Visibility visibility_;
	};
}
