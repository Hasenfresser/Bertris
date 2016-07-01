/**
*   @file       Bertris.cpp
*   @author     Hasenfresser
*   @version    under construction
*   @date       18.05.2016
*
*   @brief      Source file of Bertris class.
*/


// include guard
#if !defined BERTRIS_HPP
#define BERTRIS_HPP

#include "Bertris.hpp"
#include <iostream>

using std::cout;
using std::endl;

namespace Bertris {

Bertris::Bertris() {

}


Bertris::~Bertris() {

}


void Bertris::startGame() {
    for(uint8_t i1 = 0; i1 < BOARD_WIDTH; ++i1) {
        for(uint8_t i2 = 0; i2 < BOARD_HEIGHT; ++i2) {
            int8_t Char = '*';

            Board[i1][i2].setChar(Char);
        }
    }

    displayBoard();
}


void Bertris::displayBoard() {
    for(uint8_t CounterWidth = 0; CounterWidth < BOARD_WIDTH + 1; ++CounterWidth) {
        cout << "##";
    }

    cout << endl;

    for(uint8_t CounterHeight = 0; CounterHeight < BOARD_HEIGHT; ++CounterHeight) {
        cout << '#';

        for(uint8_t CounterWidth = 0; CounterWidth < BOARD_WIDTH; ++CounterWidth) {
            cout << Board[CounterWidth][CounterHeight].getChar() << Board[CounterWidth][CounterHeight].getChar();
        }

        cout << '#' << endl;
    }

    for(uint8_t CounterWidth = 0; CounterWidth < BOARD_WIDTH + 1; ++CounterWidth) {
        cout << "##";
    }

    cout << endl;
}
} // end namespace

#endif // !definded BERTRIS_HPP
