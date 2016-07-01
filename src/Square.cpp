/**
*   @file       Square.cpp
*   @author     Hasenfresser
*   @version    under construction
*   @date       18.05.2016
*
*   @brief      Source file of Square class. Part of Bertris Game.
*/

// include guard
#if !defined SQUARE_HPP
#define SQUARE_HPP

#include "Square.hpp"


namespace Bertris {

Square::Square() {
    // this.Char = Char;
    // this.Color = Color;
}


Square::~Square() {

}


void Square::setChar(int8_t &Char) {
    this->Char = Char;
}


void Square::setColor(uint8_t &Color) {
    this->Color = Color;
}


int8_t Square::getChar() {
    return Char;
}


uint8_t Square::getColor() {
    return Color;
}
} // end namespace

#endif // !definded SQUARE_HPP
