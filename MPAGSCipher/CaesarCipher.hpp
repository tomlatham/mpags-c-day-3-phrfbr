#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <cstddef>
#include <string>

class CaesarCipher {
	public: 
	CaesarCipher(size_t& key);
	std::string applyCipher(const std::string& inputText, const bool encrypt) const;

	private:
	size_t key_;
	const std::vector<char> alphabet_ = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	

};


#endif
