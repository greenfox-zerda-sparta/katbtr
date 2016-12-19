
#include "apple.h"

Apple::Apple() {
}

std::string Apple::getApple() {
    return "apple";
}

int Apple::sum(std::vector<int> elements) {
    int sum_result = 0;
    for (int i = 0; i < elements.size(); i++) {
        sum_result += elements[i];
    }
    return sum_result;
}