#include "../global/header.h"

void tukarSaldo(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int saldoA = 100000;
    int saldoB = 250000;

    // int *psaldoA;
    // int *psaldoB;

    // psaldoA = &saldoA;
    // psaldoB = &saldoB;

    cout << "Saldo A sebelum ditukar: " << saldoA << endl;
    cout << "Saldo B sebelum ditukar: " << saldoB << endl;
    tukarSaldo(&saldoA, &saldoB);

    cout << endl;
    cout << "Saldo A setelah ditukar: " << saldoA << endl;
    cout << "Saldo B setelah ditukar: " << saldoB << endl;
}
