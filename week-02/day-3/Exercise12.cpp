#include <iostream>
using namespace std;

void safeUnion(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
  // Implement this function to create the union of a and b into the array result!
  int i, j, k, mark;

  k = 0;

  for (i = 0; i < l_a; ++i) {
        result[k] = a[i];
        k++;
    }

    for (i = 0;i < l_b; ++i) {
        mark = 1;
        for (j = 0; j < l_res; ++j){
            if(b[i] == a[j]){
                mark = 0;
                break;
            }
        }

        if(mark){
            result[k] = b[i];
            k++;
        }
    }

  return;
}

int main(int argc, char** argv) {
  int a[3] = {1,2,3};
  int b[3] = {4,5,6};
  int c[6];
  safeUnion(a,3,b,3,c,6);
  for (int i = 0; i<6; i++) cout <<c[i] << endl;

}
