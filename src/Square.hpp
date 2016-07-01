/**
*   @file       Square.hpp
*   @author     Hasenfresser
*   @version    under construction
*   @date       18.05.2016
*
*   @brief      Header file of Square class. Part of Bertris Game.
*/

#include <cstdint>

namespace Bertris {

/**
*   @class  Square
*
*   @brief  Class of Square.
*/
class Square {
private:
    int8_t Char;
    uint8_t Color;
protected:
public:
    /**
    *   @brief  Default constructor.
    *
    *   @param  &int8_t Char
    *   @param  &uint8_t Color
    */
    Square();

    /**
    *   @brief  Default destructor.
    */
    ~Square();

    /**
    *   @brief  Setter of Char
    *
    *   @param  &int8_t Char
    */
    void setChar(int8_t &NewChar);

    /**
    *   @brief  Setter of Color
    *
    *   @param  &uint8_t Color
    */
    void setColor(uint8_t &Color);

    /**
    *   @brief  Getter of Char
    *
    *   @return  int8_t Char
    */
    int8_t getChar();

    /**
    *   @brief  Getter of Color
    *
    *   @return  uint8_t Color
    */
    uint8_t getColor();
};
} // end namespace
