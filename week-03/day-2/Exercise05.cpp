#include <string>
#include <iostream>

using namespace std;

// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters

struct House {
  string address;
  int price;
  int rooms;
  int area;
};

// The market price of the houses is 400 EUR / square meters
// Create a function that takes a refrence to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

bool worth_to_buy (House &house) {
  bool worth = false;
  if (house.price < house.area * 400) {
    worth = true;
  }
  return worth;
}

// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.

int count_worth_to_buy (House* array, int length) {
  int counter = 0;
  for (int i = 0; i < length; i++) {
    if (worth_to_buy(array[i]) == true) {
      counter++;
    }
  }
  return counter;
}

// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

void show_new_houses(House* array, int length) {
  House* new_houses = new House[length];
  for (int i = 0; i < length; i++) {
    new_houses[i].address = array[i].address;
    new_houses[i].price = array[i].area * 400;
    new_houses[i].rooms = array[i].rooms;
    new_houses[i].area = array[i].area;
    cout << new_houses[i].address << " " << new_houses[i].price << " " << new_houses[i].rooms << " "<< new_houses[i].area << endl;
  }
  delete[] new_houses;
}

int main() {

    House houses[] = {
      {"ABCD", 150000, 5, 80},
    {"EFGH", 200000, 2, 60},
    {"IJKL", 30000, 4, 90},
    {"MNOP", 220000, 3, 110},
    {"QRST", 20000, 1, 55},
    };

    cout << worth_to_buy(houses[2]) << endl;
    cout << count_worth_to_buy(houses, 5) << endl;
    show_new_houses(houses, 5);

  return 0;
}
