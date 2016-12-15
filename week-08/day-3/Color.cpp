#include <cstdint>
#include <iostream>
#include <sstream>
#include "Color.h"

using namespace std;

Color::Color() {
    Red = 0;
    Green = 0;
    Blue = 0;
}

Color::Color(uint8_t _red, uint8_t _green, uint8_t _blue) {
    this->Red = _red;
    this->Green = _green;
    this->Blue = _blue;
}

Color::Color(string hex_color) throw() {
    if (is_hex(hex_color)) {
        Red = string_to_hex(hex_color, 1);
        Green = string_to_hex(hex_color, 3);
        Blue = string_to_hex(hex_color, 5);
    } else {
        throw;
    }
}

bool Color::is_hex(string hex_color) {
    if (hex_color.length() == 7 && hex_color[0] == '#') {
        for (unsigned int i = 1; i < hex_color.length(); ++i) {
            if (! isxdigit(hex_color[i])) {
                return false;
            }
        }
    } else {
        return false;
    }
    return true;
}

uint8_t Color::string_to_hex(string& color, unsigned int position) {
    stringstream str;
    str << color.substr (position, 2);
    int result;
    str >> std::hex >> result;
    return uint8_t(result);
}

Color::Color(const Color& other) {
    Red = other.Red;
    Green = other.Green;
    Blue = other.Blue;
}

void Color::print_color() const {
    cout<< "rgb("  << (int)Red << ", " << (int)Green << ", " << (int)Blue << ")" << endl;
}

Color Color::blend(const Color& other) {
    uint8_t _red = ((int(Red) + int(other.Red)) / 2);
    uint8_t _green = ((int(Green) + int(other.Green)) / 2);
    uint8_t _blue = ((int(Blue) + int(other.Blue)) / 2);
    return Color(_red, _green, _blue);
}

void darken(float amount);