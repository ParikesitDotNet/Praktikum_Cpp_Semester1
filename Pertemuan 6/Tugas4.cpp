#include "../global/header.h"

int factorial(unsigned int input)
{
    if (input <= 1)
        return 1;

    return input * factorial(input - 1);
}

int main()
{
    unsigned int var;

    cout << "Enter Value: ";
    cin >> var;

    cout << "Result: " << factorial(var) << endl;
    return 0;
}
