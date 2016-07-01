/**
*   @file       Bertris.hpp
*   @author     Hasenfresser
*   @version    under construction
*   @date       18.05.2016
*
*   @brief      Header file of Bertris class.
*/

#include "Tetromino.hpp"

//  constants

const uint8_t TETROMINO_TEMPLATES[] = {(0, 0, 0, 0, 0,  // O-Tetromino
                                        0, 0, 0, 0, 0,
                                        0, 0, 1, 1, 0,
                                        0, 0, 1, 1, 0,
                                        0, 0, 0, 0, 0),

                                        (0, 0, 1, 0, 0, // I-Tetromino
                                         0, 0, 1, 0, 0,
                                         0, 0, 1, 0, 0,
                                         0, 0, 1, 0, 0,
                                         0, 0, 0, 0, 0),

                                        (0, 0, 0, 0, 0, // T-Tetromino
                                         0, 0, 1, 0, 0,
                                         0, 1, 1, 1, 0,
                                         0, 0, 0, 0, 0,
                                         0, 0, 0, 0, 0),

                                        (0, 0, 0, 0, 0, // L-Tetromino
                                         0, 0, 1, 0, 0,
                                         0, 0, 1, 0, 0,
                                         0, 0, 1, 1, 0,
                                         0, 0, 0, 0, 0),

                                        (0, 0, 0, 0, 0, // J-Tetromino
                                         0, 0, 1, 0, 0,
                                         0, 0, 1, 0, 0,
                                         0, 1, 1, 0, 0,
                                         0, 0, 0, 0, 0),

                                        (0, 0, 0, 0, 0, // S-Tetromino
                                         0, 0, 1, 1, 0,
                                         0, 0, 1, 0, 0,
                                         0, 1, 1, 0, 0,
                                         0, 0, 0, 0, 0),

                                        (0, 0, 0, 0, 0, // Z-Tetromino
                                         0, 1, 1, 0, 0,
                                         0, 0, 1, 0, 0,
                                         0, 0, 1, 1, 0,
                                         0, 0, 0, 0, 0)};

const uint8_t NUMBER_OF_TETROMINO_TYPES = sizeof(TETROMINO_TEMPLATES) / sizeof(uint8_t);

const uint8_t BOARD_WIDTH = 10;
const uint8_t BOARD_HEIGHT = 20;

/**
*   @namespace  Bertris
*
*   @brief      Main namespace of Bertris game.?
*/
namespace Bertris {


/**
*   @class  Bertris
*
*   @brief  Main class of Bertris game.
*/
class Bertris {
private:
    Tetromino Tetrominos[NUMBER_OF_TETROMINO_TYPES];

    Square Board[BOARD_WIDTH][BOARD_HEIGHT];

    /**
    *   @brief  Displays Bertris board
    */
    void displayBoard();
protected:
public:
    /**
    *   @brief  Default constructor.
    */
    Bertris();

    /**
    *   @brief  Default destructor.
    */
    ~Bertris();

    /**
    *   @brief  starts new Bertris game
    */
    void startGame();
};
} // end namespace
