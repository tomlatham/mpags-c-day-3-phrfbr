#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"

/** Testing the Caesar Cipher's ability to encrypt and decrypt an alphabet.
    Note that the alphabet needs to be altered depending on which key is defined
**/

TEST_CASE("Caesar Cipher encrypt has been implemented", "[alphanumeric]") {

	std::vector<std::string> plainText{"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
	std::vector<std::string> encryptText{"F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z","A", "B", "C", "D", "E"};
	

	const size_t textSize = plainText.size();
	const size_t key = 5; // define a key to test here
	CaesarCipher cc{key};

	for (unsigned int i{0}; i < textSize; ++i){
		REQUIRE (encryptText[i] == cc.applyCipher(plainText[i], CipherMode::Encrypt) );
	}

}

TEST_CASE("Caesar Cipher decrypt has been implemented", "[alphanumeric]") {

	std::vector<std::string> plainText{"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
	std::vector<std::string> encryptText{"F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z","A", "B", "C", "D", "E"};
	

	const size_t textSize = plainText.size();
	const size_t key = 5; // define a key to test here
	CaesarCipher cc{key};

	for (unsigned int i{0}; i < textSize; ++i){
		REQUIRE (plainText[i] == cc.applyCipher(encryptText[i], CipherMode::Decrypt) );
	}

}
