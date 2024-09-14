#include "Rectrangle.h"

Rectangle::Rectangle()
{
    clog << "Default Constructor Called" << endl;
    this->length = 5;
    this->width = 5;

}

/*
Rectangle::Rectangle(int w, int l)
{
    clog << "Custom Constructor Called" << endl;
    this->width = w;
    this->length = l;
}
*/

Rectangle::Rectangle(int w, int l):width(w), length(l)
{
    clog << "Custom Constructor Called" << endl;
}

void Rectangle::setWidth(int width)
{
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}
