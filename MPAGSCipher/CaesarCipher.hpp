#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <cstddef>
#include <string>
#include <vector>

#include "CipherMode.hpp"

/**
 * \file CaesarCipher.hpp
 * \brief Contains the declaration of the CaesarCipher class
 */

/**
 * \class CaesarCipher
 * \brief Encrypt or decrypt text using the Caesar cipher with the given key
 */
class CaesarCipher {
	public:

	/**
	 * Create a new CaesarCipher with the given key
	 *
	 * \param key the key to use in the cipher
	 */
	CaesarCipher(const size_t key);

	/**
	 * Apply the cipher to the provided text
	 *
	 * \param inputText the text to encrypt or decrypt
	 * \param cipherMode whether to encrypt or decrypt the input text
	 * \return the result of applying the cipher to the input text
	 */
	std::string applyCipher(const std::string& inputText, const CipherMode encrypt) const;

	private:
	/// The cipher key, essentially a constant shift to be applied
	size_t key_;

	/// The alphabet - used to determine the cipher character given the plain character and the key
	const std::vector<char> alphabet_ = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	

};


#endif
