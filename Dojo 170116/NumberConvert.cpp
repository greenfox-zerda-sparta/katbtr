#include "NumberConvert.h"
#include <numeric>
#include <iostream>

std::vector<std::pair<std::string, int > > number_pairs = { std::make_pair("IV", 4), std::make_pair("I", 1) };

std::string arabic_to_roman(unsigned int num) {
  std::pair<std::string, int> temp_pair = std::make_pair("", (int)num);
  std::string result;
  while (temp_pair.second > 0) {
    temp_pair = std::accumulate(number_pairs.begin(), number_pairs.end(), temp_pair, concat);
    /*for (unsigned int i = 0; i < number_pairs.size(); i++) {
      if (temp_pair.second - number_pairs[i].second >= 0) {
        temp_pair.first += number_pairs[i].first;
        temp_pair.second -= number_pairs[i].second;
      }
    }*/
  }
  return temp_pair.first;
}

std::pair<std::string, int> concat(std::pair<std::string, int> vector_pair, std::pair<std::string, int>& temp_pair) {
  if (temp_pair.second - vector_pair.second >= 0) {
    temp_pair.first += vector_pair.first;
    temp_pair.second -= vector_pair.second;
  }
  return temp_pair;
}