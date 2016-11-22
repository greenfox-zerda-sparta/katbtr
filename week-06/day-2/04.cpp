#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string word, unsigned int index) throw (const char*) {
    if (index < word.length()) {
        string split1 = "";
        string split2 = "";
        for (int i = 0; i < index; i++) {
            split1 += word[i];
        }
        for (int i = index; i < word.length(); i++) {
            split2 += word[i];
        }
        string* array = new string[2];
        array[0] = split1;
        array[1] = split2;
        delete[] array;
        return array;
    } else throw "Index is out of bound";
}

int main() {

    try {
        string* str;
        string* str2;
        str = split("Rebarbara", 20);
        cout << str[0] << " " << str[1] << endl;
        delete[] str;
        str2 = split("Rebarbara", 2);
        cout << str2[0] << " " << str2[1] << endl;
        delete[] str2;
    }
    catch (const char* excp) {
        cout << "Exception: " << excp << endl;
    }
    return 0;
}