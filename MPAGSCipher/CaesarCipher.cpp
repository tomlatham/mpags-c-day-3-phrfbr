#include <iostream>
#include <vector>

#include "CaesarCipher.hpp"

/** The CaesarCipher.cpp part that actually defines what is going to be done
	*
	*
	*
**/

/// Calling the CaesarCipher class
CaesarCipher::CaesarCipher(size_t& key) 
	:key_{key}

{
}

/// Call the applyCipher 
std::string CaesarCipher::applyCipher(const std::string& inputText, CipherMode encrypt) const
{

/// Do the CaesarCipher

  // Create the output string
  std::string outputText {};

  // Create the alphabet container

  const size_t alphabetSize = alphabet_.size();

  /// Loop over the input text
  char processedChar {'x'};
  for ( const auto& origChar : inputText ) {

    // For each character in the input text, find the corresponding position in
    // the alphabet by using an indexed loop over the alphabet container
    for ( size_t i{0}; i < alphabetSize; ++i ) {

      if ( origChar == alphabet_[i] ) {

	/** Apply the appropriate shift (depending on whether we're encrypting
	   or decrypting) and determine the new character **/
	// Can then break out of the loop over the alphabet
	if ( encrypt == CipherMode::encrypt ) {
	  processedChar = alphabet_[ (i + key_) % alphabetSize ];
	} else {
	  processedChar = alphabet_[ (i + alphabetSize - key_) % alphabetSize ];
	}
	break;
      }
    }

    // Add the new character to the output text
    outputText += processedChar;
  }

/// Output the Encrypted/Decrypted text 

  return outputText;
}

