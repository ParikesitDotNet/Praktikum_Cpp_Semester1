#include "../global/header.h"

int main()
{
    // Deklarasi variabel hargaBarang, diskon, dan hargaDiskon
    float hargaBarang, diskon, hargaDiskon;

    // Input harga barang dan diskon
    cout << left << setw(27) << "Masukkan Harga Barang" << ": ";
    cin >> hargaBarang;
    cout << left << setw(27) << "Diskon(%)" << ": ";
    cin >> diskon;

    // kalkulasi harga diskon
    hargaDiskon = hargaBarang * diskon / 100;

    // Output
    cout << left << "========================================" << endl;
    cout << setw(27) << "Harga Barang Awal" << ": Rp " << hargaBarang << endl;
    cout << setw(27) << "Diskon Barang " << ": " << diskon << "%" << endl;
    cout << setw(27) << "Harga Setelah Diskon" << ": Rp " << fixed
         << setprecision(2) << hargaBarang - hargaDiskon << endl;

    return 0;
}
