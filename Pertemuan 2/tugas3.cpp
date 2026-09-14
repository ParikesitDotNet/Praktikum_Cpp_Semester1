#include "header.h"

int main()
{
    // Harga Barang
    float hargaBarang, diskon, hargaDiskon;

    cout << left << setw(27) << "Masukkan Harga Barang" << ": ";
    cin >> hargaBarang;
    cout << left << setw(27) << "Diskon(%)" << ": ";
    cin >> diskon;

    hargaDiskon = hargaBarang * diskon / 100;

    cout << left << "========================================" << endl;
    cout << setw(27) << "Harga Barang Awal" << ": Rp " << hargaBarang << endl;
    cout << setw(27) << "Diskon Barang " << ": " << diskon << "%" << endl;
    cout << setw(27) << "Harga Setelah Diskon" << ": Rp " << fixed
         << setprecision(2) << hargaBarang - hargaDiskon << endl;

    return 0;
}
