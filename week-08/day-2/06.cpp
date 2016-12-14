#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

// Write a program that creates a text file named alice_words.txt
// containing an alphabetical listing of all the words,
// and the number of times each occurs, in the text version of
// Alice’s Adventures in Wonderland.
// (You can obtain a free plain text version of the book,
// along with many others, from http://www.gutenberg.org.)
//
// The first 10 lines of your output file should look something like this:
//
// Word              Count
// =======================
// a                 631
// a-piece           1
// abide             1
// able              1
// about             94
// above             3
// absence           1
// absurd            2
//
// How many times does the word alice occur in the book?
// What is the longest word in Alice in Wonderland?
// How many characters does it have?

void print_map(map<string, int>& names) {
    for(map<string, int>::iterator it = names.begin(); it != names.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }
}

int main() {
    ifstream book("alice.txt");
    string word;
    map<string, int> alice_map;
    int word_count = 0;
    while (book >> word) {
        ++word_count;
        if ( alice_map.find(word) == alice_map.end()) {
            alice_map[word] = 1;
        } else {
            ++alice_map[word];
        }
    }
    print_map(alice_map);
    cout << word_count << endl;
    return 0;
}