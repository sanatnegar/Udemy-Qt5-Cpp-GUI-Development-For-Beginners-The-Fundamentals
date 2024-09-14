#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 7;

    cout << "----------------- Math Operators -----------------" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << (float) a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "--------------- Logical Operators ----------------" << endl;
    if (a > b)
    {
        cout << "A is greater than B" << endl;
    }
    else
    {
        cout << "A is not greater than B" << endl;
    }

    if (a == b)
    {
        cout << "A is equal to B" << endl;
    }
    else
    {
        cout << "A is not equal to B" << endl;
    }

    cout << "--------------------- Loops ----------------------" << endl;

    // Loops

    // For Loop
    for(int i = 1; i<= 20; i++)
    {
        cout << "Hello Saed" << i << endl;
    }

    // While Loop
    int i = 1;
    while (i <= 20)
    {
        cout << "Hello Sanatnegar" << i << endl;
        i++;
    }

    // Do While
    i = 1;
    do
    {
        cout << "Hello Saed Sanatnegar" << i << endl;
        i++;
    }while ( i <= 20);

    return 0;
}
