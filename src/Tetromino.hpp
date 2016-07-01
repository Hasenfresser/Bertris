/**
*   @file       Tetromino.hpp
*   @author     Hasenfresser
*   @version    under construction
*   @date       20.05.2016
*   @brief      Header file of Tetromino class. Part of Bertris Game.
*/

#include "Square.hpp"


// Constants
const uint8_t TETROMINO_SIZE_A = 5;
const uint8_t TETROMINO_SIZE_B = 5;


namespace Bertris {

/**
*   @class  Square
*
*   @brief  Class of Tetromino.
*/
class Tetromino {
private:
    bool Rotatable;
    Square Squares[TETROMINO_SIZE_A][TETROMINO_SIZE_B];
protected:
public:
    /**
    *   @brief  Default constructor.
    */
    Tetromino();

    /**
    *   @brief  Default destructor.
    */
    ~Tetromino();

    /**
    *   @brief  Setter of Rotatable
    *
    *   @param  bool Rotatable
    */
    void setRotatable(bool &Rotatable);

    /**
    *   @brief  Rotates Tetronomi clockwise.
    */
    void rotateRight();

    /**
    *   @brief  Rotates Tetronomi counterclockwise.
    */
    void rotateLeft();

    /**
    *   @brief  Getter of Rotatable
    *
    *   @return bool Rotatable
    */
    bool getRotatable();
};
} // end namespace
