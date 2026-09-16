#include "../global/header.h"

int main()
{
    int pilihanUser;
    bool isUlangi = true;

    while (isUlangi)
    {
        float inputKwh;
        float totalTagihan = 0;
        float outputTagihan = 0;
        float hargaDiskon = 0;

        // Input KWH
        cout << "Masukkan penggunaan listrik (kwh): ";
        cin >> inputKwh;

        // Total tagihan Desicion
        if (inputKwh > 300)
            totalTagihan = inputKwh * 3000;

        else if (inputKwh > 100 && inputKwh <= 300)
            totalTagihan = inputKwh * 2000;

        else
            totalTagihan = inputKwh * 1500;

        outputTagihan = totalTagihan > 1000000 ? Discounts::giveDiscount(10, totalTagihan) : totalTagihan;
        hargaDiskon = totalTagihan - outputTagihan;

        // Outputs
        cout << left << fixed << setprecision(2) << endl;
        cout << setw(33) << "Total Penggunaan Listrik" << ": " << inputKwh << "kWh\n";
        cout << setw(33) << "Total Tagihan Sebelum Diskon" << ": Rp " << totalTagihan << endl;
        cout << setw(33) << "Diskon" << ": Rp " << hargaDiskon << endl;
        cout << setw(33) << "Total Tagihan Setelah Diskon" << ": Rp " << outputTagihan << endl;

        // Konfirmasi action user
        do
        {
            cout << "Ingin menghitung tagihan untuk pengguna lain? (1 untuk ya, 2 untuk tidak): ";
            cin >> pilihanUser;

            if (pilihanUser == 1)
            {
                isUlangi = true;
            }
            else if (pilihanUser == 2)
            {
                isUlangi = false;
            }
            else
                cout << "Mohon masukkan pilihan yang benar!\n";
            cout << endl;

        } while (pilihanUser != 1 && pilihanUser != 2);
    }

    return 0;
}