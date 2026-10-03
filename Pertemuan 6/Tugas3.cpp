#include "../global/header.h"

// Function definition using references (&)
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << "\n";

    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << "\n";
    return 0;
}
