#include "header.h"

int main()
{
    // Deklarasi variabel
    int panjang, lebar, tinggi;

    // Input Panjang
    cout << left;
    cout << setw(28) << "Masukkan Panjang Balok" << ": ";
    cin >> panjang;

    // Input Lebar
    cout << left;
    cout << setw(28) << "Masukkan Lebar Balok" << ": ";
    cin >> lebar;

    // Input Tinggi
    cout << left;
    cout << setw(28) << "Masukkan Tinggi Balok" << ": ";
    cin >> tinggi;

    // Hitung Volume
    cout << "===================================" << endl;
    cout << left;
    cout << setw(28) << "Hasil Volume Balok" << ": " << panjang * lebar * tinggi << "cm\n";

    // Hitung Luas Permukaan
    cout << left;
    cout << setw(28) << "Hasil Luas Permukaan Balok" << ": "
         << 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi)
         << " cm²\n";

    // Output dengan format tabel
    cout << left;
    cout << setw(28) << "Panjang Balok" << ": " << panjang << " cm\n";
    cout << setw(28) << "Lebar Balok" << ": " << lebar << " cm\n";
    cout << setw(28) << "Tinggi Balok" << ": " << tinggi << " cm\n";
    return 0;
}
