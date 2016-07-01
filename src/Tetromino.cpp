/**
*   @file       Tetromino.cpp
*   @author     Hasenfresser
*   @version    under construction
*   @date       20.05.2016
*
*   @brief      Source file of Tetromino class. Part of Bertris Game.
*/

// include guard
#if !defined TETROMINO_HPP
#define TETROMINO_HPP

#include "Tetromino.hpp"


namespace Bertris {

Tetromino::Tetromino() {

}


Tetromino::~Tetromino() {

}


void Tetromino::setRotatable(bool &Rotatable) {
    this->Rotatable = Rotatable;
}


void Tetromino::rotateRight() {

}


void Tetromino::rotateLeft() {

}


bool Tetromino::getRotatable() {
    return Rotatable;
}
} // end namespace

#endif // !definded TETROMINO_HPP

