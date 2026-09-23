#include "../global/header.h"

int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int n = 222;
    cout << "Jumlah digits dari " << n << " adalah: " << sumDigits(n) << endl;
    n = 444;
    cout << "Jumlah digits dari " << n << " adalah: " << sumDigits(n) << endl;
    return 0;
}