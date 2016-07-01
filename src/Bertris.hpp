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
                                         0, 0, 0, 0, 0)};

const uint8_t NUMBER_OF_TETRONOMI_TYPES = sizeof(TETROMINO_TEMPLATES) / sizeof(uint8_t);

/**
*   @namespace  Bertris
*
*   @brief      Main namespace of Bertris game.
*/
namespace Bertris {


/**
*   @class  Bertris
*
*   @brief  Main class of Bertris game.
*/
class Bertris {
private:
    Tetromino Tetrominos[NUMBER_OF_TETRONOMI_TYPES];
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
