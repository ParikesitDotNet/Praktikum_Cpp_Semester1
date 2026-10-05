#include "../global/header.h"

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

bool isPrimeNumber(int number)
{
    if (number <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int inputNum;
    cout << "Masukkan urutan fibonacci: ";
    cin >> inputNum;

    int fibonacciOutput = fibonacci(inputNum);
    bool isPrime = isPrimeNumber(fibonacciOutput);

    cout << "Hasil fibonacci: " << fibonacciOutput << endl
         << (isPrime ? "Angka adalah angka prima" : "Angka bukan prima");

    return 0;
}
