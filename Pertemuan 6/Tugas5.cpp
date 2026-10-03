#include "../global/header.h"

int fact(int input)
{
    if (input <= 1)
        return 1;

    return input * fact(input - 1);
}

void nCr(int n, int r)
{
    int result = 0;

    if (n < 1 || r < 0)
        throw invalid_argument("ERROR: Value r dan n tidak dapat negatif!");

    if (r > n)
        throw invalid_argument("ERROR: Value r tidak dapat lebih besar daripada n!");

    result = fact(n) / (fact(r) * fact(n - r));

    cout << "Hasil kombinasi " << n << " dari " << r << " adalah: " << result;
    return;
}

int main()
{
    int nVal, rVal;

    cout << "Masukkan value n: ";
    cin >> nVal;

    cout << "Masukkan value r: ";
    cin >> rVal;

    try
    {
        nCr(nVal, rVal);
    }

    catch (const invalid_argument &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}
