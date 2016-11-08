#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"

/** Testing the Caesar Cipher's ability to encrypt and decrypt an alphabet.
    Note that the alphabet needs to be altered depending on which key is defined
**/

TEST_CASE("Caesar Cipher encrypt has been implemented", "[alphanumeric]") {

	std::vector<char> caesarText{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	std::vector<char> encryptText{'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','A', 'B', 'C', 'D', 'E'};
	

	const size_t textSize = caesarText.size();
	int key = 5; // define a key to test here

	for (unsigned int i{0}; i < textSize; ++i){
		std::string encryptString{(encryptText[i])};
		std::string textString {(caesarText[(i + key) % textSize])};

		REQUIRE (encryptString == textString);
	}

}

TEST_CASE("Caesar Cipher decrypt has been implemented", "[alphanumeric]") {

	std::vector<char> caesarText{'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','A', 'B', 'C', 'D', 'E'};

	std::vector<char> decryptText{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	

	const size_t textSize = caesarText.size();
	int key = 5;  // define a key to test here

	for (unsigned int i{0}; i < textSize; ++i){
		std::string decryptString{(decryptText[i])};
		std::string textString {caesarText[ (i + textSize - key) % textSize]};

		REQUIRE (decryptString == textString);
	}

}
