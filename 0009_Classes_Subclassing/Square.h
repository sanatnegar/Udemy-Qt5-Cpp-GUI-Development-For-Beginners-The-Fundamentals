#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include <Rectrangle.h>

using namespace std;

class Square : public Rectangle
{
public:
    Square(int side):Rectangle(side, side)
    {
        clog << "Square Constructor Called" << endl;
    }

};

#endif // SQUARE_H
