#include <iostream>

using namespace std;

class Rectangle{

public:
    void setWidth(int width);

    // Desfining method inside of the class
    void setLength(int length)
    {
        this->length = length;
    }

    int getArea()
    {
        return width * length;
    }

private:
    int width;
    int length;

};

// Defining method out of the class
void Rectangle::setWidth(int width)
{
    this->width = width;
}

int main()
{
    Rectangle r;
    r.setWidth(10);
    r.setLength(20);
    cout << "The area of the rectanlge is: " << r.getArea() << endl;
    return 0;
}
