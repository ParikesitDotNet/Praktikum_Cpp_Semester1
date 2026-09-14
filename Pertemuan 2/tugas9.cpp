#include "header.h"

int main()
{
    float panjang, lebar, tinggi, hargaCat;
    float totalSisiDepan, totalSisiBelakang;
    float totalLuasRuangan, totalLiterCat, totalHargaCat;

    cout << left;
    cout << "" << endl;

    // Input Panjang
    cout << setw(30) << "Masukkan Panjang dinding (m)" << ":";
    cin >> panjang;

    // Input Lebar
    cout << setw(30) << "Masukkan Lebar dinding (m)" << ": ";
    cin >> lebar;

    // Input Tinggi
    cout << setw(30) << "Masukkan Tinggi dinding (m)" << ": ";
    cin >> tinggi;

    // Input Tinggi
    cout << setw(30) << "Masukkan Harga cat/liter" << ": Rp.";
    cin >> hargaCat;

    // Kalkulasi masing2 sisi dinding
    totalSisiDepan = 2 * (panjang * tinggi);
    totalSisiBelakang = 2 * (lebar * tinggi);

    totalLuasRuangan = totalSisiDepan + totalSisiBelakang;
    totalLiterCat = totalLuasRuangan / 10;
    totalHargaCat = totalLiterCat * hargaCat;

    // Hitung Luas Permukaan, harga total, liter total
    cout << "" << endl;
    cout << setw(30) << "Luas permukaan dinding" << ": " << fixed << setprecision(2) << totalLuasRuangan << "m^2\n";
    cout << setw(30) << "Total liter cat" << ": " << fixed << setprecision(2) << totalLiterCat << " liter\n";
    cout << setw(30) << "Harga total cat" << ": Rp." << fixed << setprecision(2) << totalHargaCat << endl;
    cout << "" << endl;

    return 0;
}
