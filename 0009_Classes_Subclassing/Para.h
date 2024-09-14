#ifndef PARA_H
#define PARA_H

#include <iostream>
#include "Rectrangle.h"

using namespace std;

// Para class
class Para
{
public:
    Para(int w, int l, int h):r(w,l), height(h)
    {
        clog << "Para Constructor Called" << endl;
    }

    int getVolume()
    {
        return r.getArea() * height;
    }

private:
    Rectangle r;
    int height;
};


#endif // PARA_H
