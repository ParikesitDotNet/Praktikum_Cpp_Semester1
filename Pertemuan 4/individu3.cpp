#include "../global/header.h"

int main()
{

    float inputKwh;
    float totalTagihan = 0.00;
    float hargaDiskon = 0.00;

    cout << "Masukkan penggunaan listrik (kwh): ";
    cin >> inputKwh;

    if (inputKwh > 300)
        totalTagihan = inputKwh * 3000;

    else if (inputKwh > 100 && inputKwh <= 300)
        totalTagihan = inputKwh * 2000;

    else
        totalTagihan = inputKwh * 1500;

    return 0;
}