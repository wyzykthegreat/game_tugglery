#include "Card.hpp"

namespace tugglery {
	
	Card::Card(int value, char suit, Visibility visibility) :
		value_(value),
		suit_(suit),
		visibility_(visibility) {}

	int Card::getValue() const {
    	return value_;
	}

	char Card::getSuit() const {
    	return suit_;
	}

	Visibility Card::getVisibility() const{
		return visibility_;
	}

	int Card::getOwnerId() const{
		return owner_id_;
	}

	void Card::setVisibility(
		Visibility visibility,
		std::optional<int> owner_id
	) {
		this->visibility_ = visibility

		if (visibility == Visibility::Owner){
			if (!owner_id){
				throw std::invalid_argument(
					"Owner visibility requires owner ID"); 
			}
			this->owner_id_ = *owner_id;
		} else {
			this->owner_id_ = 0;
		}
	}

}
