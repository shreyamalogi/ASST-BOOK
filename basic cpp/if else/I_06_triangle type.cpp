//author :shreyamalogi
//which type of triangle it is

#include <iostream>
using namespace std;

int main()
{

    int sidea, sideb, sidec;
    cout << "Input three sides of triangle: \n ";
    cin >> sidea >> sideb >> sidec;

    if (sidea == sideb && sideb == sidec)
    {
        cout << "This is an equilateral triangle. \n ";
    }
    else if (sidea == sideb || sidea == sidec || sideb == sidec)
    {
        cout << "This is an isosceles triangle. \n ";
    }
    else
    {
        cout << "This is a scalene triangle. \n ";
    }

    return 0;
}


// 12 3 4
//This is a scalene triangle.

// 1 2 2
//This is an isosceles triangle.

// 12 12 12
//This is an equilateral triangle.
