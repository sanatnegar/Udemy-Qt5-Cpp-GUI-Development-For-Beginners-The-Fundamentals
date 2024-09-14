#ifndef RECTRANGLE_H
#define RECTRANGLE_H
#include <iostream>

using namespace std;

class Rectangle{

public:
    Rectangle();

    Rectangle(int w, int l);

    void setWidth(int width);

    void setLength(int length);

    int getArea()
    {
        return width * length;
    }

private:
    int width;
    int length;

};


#endif // RECTRANGLE_H
