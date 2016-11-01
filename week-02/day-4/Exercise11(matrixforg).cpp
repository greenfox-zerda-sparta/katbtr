#include <iostream>
#include <string>


using namespace std;


void ClockwiseRotate(char matrix[5][5], int row, int col){

int tmp;
 for(int i = 0; i < row - 1; i++){
    for(int j = i; j < col; j++) {

      tmp = matrix[i][j];
      matrix[i][j] = matrix[j][i];

      matrix[j][i] = tmp;

    }
}

  for(int i = 0; i < row; i++) {
      for(int j =0; j < col/2; j++) {

        tmp = matrix[i][j];
        matrix[i][j] = matrix[i][col - j -1];
        matrix[i][col - j -1] = tmp;
      }
  }

  for (int i = 0; i < 5; ++i) {
      for (int j = 0; j < 5; ++j) {
        cout << matrix[i][j];
     } cout << endl;
  }cout << endl;
};

int main(int argc, char *argv[]) {

  char matrix[5][5] = {
      {'.', '.', '#', '.', '.'},
      {'.', '#', '.', '#', '.'},
      {'.', '#', '#', '#', '.'},
      {'.', '#', '.', '#', '.'},
      {'.', '#', '.', '#', '.'}
    };


  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << matrix[i][j];
    }
    cout << endl;
  }


  // write the rotate_right function that rotates the matrix to the left
  // so the program should print this:
  //
  // ####
  //   # #
  // ####

  cout << endl;

  ClockwiseRotate(matrix, 5, 5);

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << matrix[i][j];
    }
    cout << endl;
  }

  return 0;
}
