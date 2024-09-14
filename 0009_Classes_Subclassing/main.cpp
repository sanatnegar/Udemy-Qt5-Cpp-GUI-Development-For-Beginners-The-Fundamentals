#include <iostream>
#include "Rectrangle.h"
#include "Para.h"
#include "Square.h"

using namespace std;

int main()
{
    Rectangle r1;
    Rectangle r2(20, 20);
    Para p(30, 30, 30);
    Square s(40);
    cout << "The area of the rectanlge 1 is: " << r1.getArea() << endl;
    cout << "The area of the rectanlge 2 is: " << r2.getArea() << endl;
    cout << "The volume of our shape is: " << p.getVolume() << endl;
    cout << "The area of your square is: " << s.getArea() << endl;
    return 0;
}
