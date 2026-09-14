#include "header.h"

int main()
{
    int angka;
    bool yes = true;
    while (yes)
    {
        cout << "Masukkan Angka:";
        cin >> angka;

        if (angka < 0)
        {
            cout << "Program selesai";
            break;
        }

        // rumus faktorial
        unsigned long long faktorial = 1;

        for (int i = 1; i <= angka; ++i)
        {
            faktorial = faktorial * i;
        }

        cout << "Faktorial dari " << angka << " adalah: " << faktorial << endl;
    }
    return 0;
}
