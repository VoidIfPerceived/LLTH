#include <iostream>
#include "header.hpp"

using namespace std;

int main() {
    // This program prints "Hello, World!" to the console.
    string lyrics;

    cout << "WELCOME TO L1L1TH\n";
    uiInputSystem::lyric_input(lyrics);

    lyricSystem::syllablizer(lyrics);

    return 0;
};