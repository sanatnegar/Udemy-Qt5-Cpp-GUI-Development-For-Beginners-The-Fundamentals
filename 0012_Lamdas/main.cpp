#include <iostream>

using namespace std;

int main()
{
    // [capture list] (parameter list ) -> return_value_type {function body}

    /* Method 1
    // Give lambda function a name and call it
    auto func = [](){
        cout << "Hello World!" << endl;
    };

    func();
    */

    /* Method 2
    // Call lambda function directly after difinition
    [](){
            cout << "Hello World!" << endl;
        }();
    */

    /* Method 3
    // Define a lambda function that takes parameters
    [](int a, int b){
      cout << "a + b = "   << a + b << endl;
    }(3, 7);
    */

    /* Method 4
    // Define a lambda that returns something
    cout << "The sum is: " << [](int a, int b)->int{
        return a + b;
      }(3, 7) << endl;
    return 0;
    */

    /*
    // Capture Lists
    int a = 7;
    int b = 3;
    [a, b]()
    {
       cout << "a is : " << a << endl;
       cout << "b is : " << b << endl;
       cout << "a + b = "   << a + b << endl;
    }();
    */

    /*
    // Capturing by value
    int c = 42;
    auto func = [c](){
      cout << "The inner value of c is: " << c << endl;
    };

    for(int i = 1; i < 5; i++)
    {
        cout << "The outer value of c is: " << c << endl;
        func();
        c = c + 1;
    }
    */


    // Capuring by reference
    /*
    int c = 42;
    auto func = [&c](){
      cout << "The inner value of c is: " << c << endl;
    };

    for(int i = 1; i < 5; i++)
    {
        cout << "The outer value of c is: " << c << endl;
        func();
        c = c + 1;
    }
    */



    // Capture everything in the context by value
    /*
    int c = 42;
    int d = 6;
    auto func = [=](){
      cout << "The inner value of c is: " << c << endl;
      cout << "The inner value of d is: " << d << endl;
    };

    for(int i = 1; i < 5; i++)
    {
        cout << "The outer value of c is: " << c << endl;
        func();
        c = c + 1;
    }
    */

    // Capture everything in the context by reference

    int c = 42;
    int d = 6;
    auto func = [&](){
      cout << "The inner value of c is: " << c << endl;
      cout << "The inner value of d is: " << d << endl;
    };

    for(int i = 1; i < 5; i++)
    {
        cout << "The outer value of c is: " << c << endl;
        func();
        c = c + 1;
    }

}
