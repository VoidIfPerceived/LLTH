/*
UI Inputs:
- Lyric Input (text)
- Midi Input (midi?? unsure of format)
    - Shown as visualized piano roll
- Character Style input (input set)
- Character Style (input set)
    - Character presets
        - Per1dot
        - Brocolli
*/

#include <iostream>
#include "../header.hpp"

namespace uiInputSystem {
    // Function to handle text input for lyrics
    int lyric_input(std::string &input) {
        std::cout << "Lyrics: \n";
        std::getline(std::cin, input);

        if (!input.empty()) {
            return 0; // No errors
        } else if (input.empty()) {
            return 1; // Error: No lyrics found
        } else {
            return 2; // Error: Unknown error
        };
    };
};