#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe

int main() {
    map<string, string> names;
    vector<string> names2;
    string input;
    do {
        if (input != "") {
            names[input];
            names2.push_back(input);
        }
        cout << "Input name for secret santa!" << endl;
        cin >> input;
    } while (input != "q");
    random_shuffle(names2.begin(), names2.end());
    int j = 0;
    for (map<string, string>::iterator i = names.begin(); i != names.end(); i++) {
        if (i->first == names2[j]) {
            ++j;
        }
        i->second = names2[j];
        names2.erase(names2.begin() + j);
        j = 0;
    }
    for(map<string, string>::iterator it = names.begin(); it != names.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}