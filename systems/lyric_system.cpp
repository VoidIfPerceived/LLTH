#include <iostream>

#include <map>
#include "../header.hpp"

namespace lyricSystem {
    //Instaintiate structures

    struct syllable {
        std::string letters; //A string of the letters held within the syllable
        std::vector<int> splitpoints; //A vector of the points where the sound within the syllable changes (also includes if the pitch changes)
        std::vector<int> pitch; //A vector of the pitches of each splitpoint
        std::vector<int> splitlength; //A vector of the lengths of each splitpoint
    };
    // Syllablizer parses the lyrics from an input and inserts each syllable into a vector
    int syllablizer(std::string* input) {
        std::string lyrics = *input; // Get the input string
        std::cout << "Syllablizer Input: " << lyrics << "\n";
        // Instantiate variables
        int error; // Error output code
        int length = lyrics.length(); // Length of the input string
        std::cout << "Syllablizer Length: " << length << "\n";
        std::vector<char> letters; // A vector to hold the letters of a syllable
        if (length < 1) {
            error = 1; // No lyrics found
            *input = "Syllablizer Error: No Lyrics Found"; // Set input to error message for testing purposes
        } else if (length > 0) {
            error = 0; // No errors
            for (int index = 0; index < length; index++) {
                char currentchar = lyrics[index];;
                letters.push_back(currentchar);
            };
            *input = std::string(letters.begin(), letters.end());
        }

        if (error == 0) {
            std::cout << "Syllablizer: No Errors \n";
            return 0; // No errors
        }
        else if (error == 1) {
            std::cout << "Error: No Lyrics Found \n";
            return 1; // No lyrics found
        }
        else {
            std::cout << "Error: Unknown Error \n";
            return 2; // Unknown error
        }
    };
};