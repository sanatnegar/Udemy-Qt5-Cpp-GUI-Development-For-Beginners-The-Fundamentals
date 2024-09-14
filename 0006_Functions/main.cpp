#include <iostream>

using namespace std;

// [Return Type][Function Name][Function Parameters]
void sayHi()
{
    cout << "Hello Saed" << endl;
}

int sumation(int a, int b)
{
    return a + b;
}

float sumation(float a, float b)
{
    return a + b;
}

double sumation(double a, double b)
{
    return a + b;
}


int main()
{
    sayHi();

    cout << "The sum of 3 and 7 is: " << sumation(3, 7) << endl;
    cout << "The sum of 3.3 and 7.2 is: " << sumation(3.3f, 7.2f) << endl;
    cout << "The sum of 3.3 and 7.2 is: " << sumation(3.3, 7.2) << endl;
    return 0;
}
