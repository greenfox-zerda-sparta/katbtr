#include <iostream>
#include <string>
#include <vector>

using namespace std;

void change_given_vector(vector<int>& vectorf_inner) {
    for (unsigned int i = 0; i < vectorf_inner.size(); i++) {
        vectorf_inner[i]++;
    }
}

void print_vector(vector<vector<int> >& pr_v) {
    for (unsigned int i = 0; i < pr_v.size(); i++) {
        for(unsigned int j = 0; j < pr_v[i].size(); j++) {
            cout << pr_v[i][j] << "|";
        }
        cout << endl;
    }
}

int main() {
	//create a vector of vector of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector
	//create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)

    vector<int> v_inner(5, 0);
    vector<vector<int> > v_outer(5, v_inner);
    print_vector(v_outer);
    change_given_vector(v_outer[2]);
    cout << endl;
    print_vector(v_outer);

  return 0;
}