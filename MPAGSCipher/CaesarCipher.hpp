#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <cstddef>
#include <string>
#include <vector>

#include "CipherMode.hpp"

/**  CeasarCipher heading file defining the class that will perform the Caesar cipher
     *
     *
     *
     This includes:
		    - Member Functions
		    - Decleration
   		    - Constructors
		    - Public and Private
     *
     *
     *
**/

class CaesarCipher {
	public: /// < Public, available to all code
	CaesarCipher(size_t& key);  /// < Constructor 
	std::string applyCipher(const std::string& inputText, CipherMode encrypt) const;

	private: /// < Private, avaiable only to this section
	size_t key_;
	const std::vector<char> alphabet_ = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	

};


#endif
