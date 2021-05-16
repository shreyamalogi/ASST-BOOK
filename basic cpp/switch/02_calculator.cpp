//author :shreyamalogi

//implement a simple calculator using switch
#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    cout << "Input 2 numbers: ";
    cin >> n1 >> n2;

    char op;
    cout << "input an operator";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "Enter another operator:" << endl;
        break;
    }

    return 0;
}


//Input 2 numbers: 5 6
//input an operator: +
//11
//
//Input 2 numbers: 79 90
//input an operator*
//7110

