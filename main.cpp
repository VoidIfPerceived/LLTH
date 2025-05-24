#include <iostream>
#include "header.hpp"

using namespace std;

int main() {
    // This program prints "Hello, World!" to the console.
    printf("Hello, World!\n");
    string input;
    cout << "Enter the words for your song: ";
    cin >> input;
    cout << "Lyrics: \n" << input;

    cout << "Confirm syllablizer function is working: \n" << lyricSystem::syllablizer();
    return 0;
};