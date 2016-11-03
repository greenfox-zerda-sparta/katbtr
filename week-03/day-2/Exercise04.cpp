#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

int sum_of_gold(Pirate* array, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += array[i].gold_count;
  }
  return sum;
}

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

float ave_of_gold(Pirate* array, int length) {
  float sum = 0;
  for (int i = 0; i < length; i++) {
    sum += array[i].gold_count;
  }
  return sum / length;
}

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

string richest_wooden_leg(Pirate* array, int length) {
  int gold = 0;
  string name = "";
// Pirate richest = {"", false, 0}
  for (int i = 0; i < length; i++) {
    if (array[i].has_wooden_leg && array[i].gold_count > gold) {
// ... && array[i].gold_count > richest.gold_count)
        gold = array[i].gold_count;
        name = array[i].name;
//      richest = array[i]
    }
  }
  return name;
//return richest;
}

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };

  cout << sum_of_gold(pirates, 6) << endl;
  cout << ave_of_gold(pirates, 6) << endl;
  cout << richest_wooden_leg(pirates, 6) << endl;


  return 0;
}
