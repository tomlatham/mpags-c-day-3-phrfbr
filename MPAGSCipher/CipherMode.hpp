#ifndef MPAGSCIPHER_CIPHERMODE_HPP
#define MPAGSCIPHER_CIPHERMODE_HPP

/** Creating an Enumeration to replace a boolean
 to define whether something is being encrypted or decrypted. 
**/

enum class CipherMode{

	Encrypt, /// < Changes letters by some key of an original file to encrypt
	Decrypt  /// < Changed letters by some key of an exncrypted file to the original
};

#endif
