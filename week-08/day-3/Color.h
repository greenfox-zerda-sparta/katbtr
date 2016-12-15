#include <cstdint>
#include <iostream>

#ifndef COLOR_COLOR_H
#define COLOR_COLOR_H

class Color {
private:
    uint8_t Red;
    uint8_t Green;
    uint8_t Blue;
public:
    Color();
    Color(uint8_t _red, uint8_t _green, uint8_t _blue);
    Color(std::string hex_color) throw();
    Color(const Color& other);
    bool is_hex(std::string hex_color);
    uint8_t string_to_hex(std::string& color, unsigned int position);
    void print_color() const;
    Color blend(const Color& other);
    void darken(float amount);
};

#endif //COLOR_COLOR_H
