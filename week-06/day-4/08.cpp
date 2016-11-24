#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create a vector of characters with the size of 8
	//ask the user to fill this vector with characters one by one
	//at the end make sure the vector holds the letters of "GREENFOX"
	//so correct the user if he/she gives a different letter from the one we want them to give :)

    vector<char> v_user(8);
    vector<char> v_greenfox(8);
    v_greenfox = {'G', 'R', 'E', 'E', 'N', 'F', 'O', 'X'};

    for (int i = 0; i < 8; i++) {
        cout << "Please enter a character" << endl;
        char character;
        cin >> character;
        while (character != v_greenfox[i]) {
            cout << "This is not the correct character, you should have entered: " << v_greenfox[i] << endl;
            cin >> character;
        }
        v_user[i] = character;
    }
    cout << endl;

    for (unsigned int i = 0; i < v_user.size(); i++) {
        cout << v_user[i] << "|";
    }

  return 0;
}