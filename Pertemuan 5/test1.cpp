#include "../global/header.h"

void calculateSquare(int &number)
{
    number *= number;
}

int main()
{
    int num = 5;
    cout << "Kuadrat dari " << num;
    calculateSquare(num);
    cout << " adalah " << num << endl;
    return 0;
}