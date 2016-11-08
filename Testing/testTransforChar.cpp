#define CATCH_CONFIG_MAIN
#include "catch.hpp"


#include "TransformChar.hpp"

/// Test to check if characters are upper case
TEST_CASE("Characters are uppercase", "[alphanumeric]") {

	std::vector<char> alphaUpper{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	std::vector<char> alphaLower{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	const size_t alphaSize = alphaUpper.size();

	for (unsigned int i =0; i < alphaSize; ++i){
		std::string upperCase {alphaUpper[i]};
		REQUIRE (transformChar(alphaLower[i]) == upperCase);
	}
} 	

/// Test to check if no numeric characters are present
TEST_CASE("Digits are transliterated", "[alphanumeric]") {
	REQUIRE (transformChar('0') == "ZERO");
	REQUIRE (transformChar('1') == "ONE");
	REQUIRE (transformChar('2') == "TWO");
	REQUIRE (transformChar('3') == "THREE");
	REQUIRE (transformChar('4') == "FOUR");
	REQUIRE (transformChar('5') == "FIVE");
	REQUIRE (transformChar('6') == "SIX");
	REQUIRE (transformChar('7') == "SEVEN");
	REQUIRE (transformChar('8') == "EIGHT");
	REQUIRE (transformChar('9') == "NINE");

}

/// Test to check is no special characters are present
TEST_CASE("Special characters are removed", "[punctuation]") {
	REQUIRE (transformChar('!') == "");
	REQUIRE (transformChar('"') == "");
	REQUIRE (transformChar('%') == "");
	REQUIRE (transformChar('^') == "");
	REQUIRE (transformChar('&') == "");
	REQUIRE (transformChar('*') == "");
	REQUIRE (transformChar('-') == "");
	REQUIRE (transformChar('+') == "");
	REQUIRE (transformChar('=') == "");
	REQUIRE (transformChar('_') == "");
	REQUIRE (transformChar('/') == "");
	REQUIRE (transformChar('<') == "");
	REQUIRE (transformChar('>') == "");  //etc... 


}

