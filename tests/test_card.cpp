#include <catch2/catch_test_macros.hpp>
#include <tugglery_core/Card.hpp>

TEST_CASE("Card stores value, suit, owner and visibility state", "[Card]"){
	tugglery::Card c(7, 'd', tugglery::Visibility::None);
	REQUIRE(c.getValue() == 7);
	REQUIRE(c.getSuit() == 'd');
	REQUIRE(c.getVisibility() == tugglery::Visibility::None);
	REQUIRE_THROWS_AS(
		c.setVisibility(tugglery::Visibility::Owner),
		std::invalid_argument
	);
	c.setVisibility(tugglery::Visibility::Owner, 1);
	REQUIRE(c.getOwnerId() == 1);
} 
