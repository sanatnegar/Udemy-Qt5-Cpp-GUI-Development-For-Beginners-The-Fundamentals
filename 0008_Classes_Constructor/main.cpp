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

Rectangle::Rectangle()
{
    clog << "Default Constructor Called" << endl;
    this->length = 5;
    this->width = 5;

}

// Initialization - First Method
/*
Rectangle::Rectangle(int w, int l)
{
    clog << "Custom Constructor Called" << endl;
    this->width = w;
    this->length = l;
}
*/

// Initialization - Second Method
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

int main()
{
    Rectangle r1;
    Rectangle r2(20, 20);
    Para p(30, 30, 30);
    cout << "The area of the rectanlge 1 is: " << r1.getArea() << endl;
    cout << "The area of the rectanlge 2 is: " << r2.getArea() << endl;
    cout << "The volume of our shape is: " << p.getVolume() << endl;
    return 0;
}
