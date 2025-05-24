#include <iostream>
#include "../header.hpp"
namespace lyricSystem {
    int syllablizer() {
        // This function parses the lyrics from an input and inserts each syllable into a vector
        int error;
    


        error = 0;

        if (error == 0) {
            std::cout << "Syllablizer: No Errors \n";
            return 0;
        }
        else if (error == 1) {
            std::cout << "Error: No Lyrics Found \n";
            return 1;
        }
        else {
            std::cout << "Error: Unknown Error \n";
            return 2;
        }
    };

    

    struct syllable {
        std::string letters; //A string of the letters held within the syllable
        std::vector<int> splitpoints; //A vector of the points where the sound within the syllable changes (also includes if the pitch changes)
        std::vector<int> pitch; //A vector of the pitches of each splitpoint
        std::vector<int> splitlength; //A vector of the lengths of each splitpoint
    };
};