#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(vector<vector<int> >& pr_v) {
    for (unsigned int i = 0; i < pr_v.size(); i++) {
        for(unsigned int j = 0; j < pr_v[i].size(); j++) {
            cout << pr_v[i][j] << "|";
        }
        cout << endl;
    }
}

int main() {
    //Create a 2 dimensional vector with matrix!
    // 1 0 0 0
    // 0 1 0 0
    // 0 0 1 0
    // 0 0 0 1
    // Extend it to the following format:
    // 1 1 1 1 1
    // 0 1 0 0 1
    // 0 0 1 0 1
    // 0 0 0 1 1
    // 0 0 0 0 1
    // Mirror it horizontally!
    // 0 0 0 0 1
    // 0 0 0 1 1
    // 0 0 1 0 1
    // 0 1 0 0 1
    // 1 1 1 1 1
    // Mirror it vertically!
    // 1 1 1 1 1
    // 1 0 0 1 0
    // 1 0 1 0 0
    // 1 1 0 0 0
    // 1 0 0 0 0

    vector<int> v_inner(4, 0);
    vector<vector<int> > v_outer(4, v_inner);

    for (unsigned int i = 0; i < v_outer.size(); i++) {
        for (unsigned int j = 0; j < v_outer[i].size(); j++) {
            if (i == j) {
                v_outer[i][j] = 1;
            }
        }
    }
    print_vector(v_outer);
    cout << endl;
    for (int i = 0; i < 4; i++) {
        v_outer[0][i] = 1;
    }
    v_outer.push_back(v_inner);
    for (int i = 0; i < 5; i++) {
        v_outer[i].push_back(1);
    }
    print_vector(v_outer);
    cout << endl;

    cout << "Mirror vertically:" << endl;
    for (int i = 0; i < 5; i++) {
        reverse(v_outer[i].begin(), v_outer[i].end());
    }
    print_vector(v_outer);
    cout << endl;

    cout << "Mirror horizontally:" << endl;
    for (unsigned int j = 0; j < 5; j++) {
        reverse(v_outer.begin(), v_outer.end());
    }

    print_vector(v_outer);
    cout << endl;

    return 0;
}