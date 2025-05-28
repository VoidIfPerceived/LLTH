#include <iostream>
#include "header.hpp"

using namespace std;

int main() {
    // This program prints "Hello, World!" to the console.

    cout << "Initializing L1L1TH...\n";
    // Initialize variables and pointers for lyric input
    string lyrics;
    string* lyricsptr = &lyrics;

    cout << "L1L1TH Initialized.\n";
    cout << "WELCOME TO L1L1TH\n";
    uiInputSystem::lyric_input(lyrics);

    lyricSystem::syllablizer(&lyrics);

    std::cout << "Lyrics back from syllablizer: " << lyrics << "\n";
    return 0;
};