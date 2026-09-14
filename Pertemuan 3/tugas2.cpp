#include "header.h"
#include <cmath>
#include <vector>

int main()
{
    // Daftar Variabel Data //
    int jml, harga, totalhrg, diskon1, hargaakhir;
    float diskon;
    string diskon2;
    vector<string> jml1;
    vector<int> harga1;
    string barang;

    // Input Barang //
    cout << "Masukkan jumlah barang yang dibeli " << ": ";
    cin >> jml;

    cin.ignore();

    for (int i = 0; i < jml; i++)
    {
        cout << "Masukkan nama barang ke-" << (i + 1) << ": ";
        getline(cin, barang);

        jml1.push_back(barang);
    }

    for (int i = 0; i < jml1.size(); i++)
    {
        cout << "Masukkan harga " << jml1[i] << ": ";
        cin >> harga;

        harga1.push_back(harga);
    }

    // Proses Data //

    for (int i = 0; i < jml1.size(); i++)
    {
        totalhrg = totalhrg + harga1[i];
    }

    if (totalhrg >= 500000)
    {
        diskon = 0.1;
        diskon2 = "10%";
        diskon1 = diskon * totalhrg;

        hargaakhir = totalhrg - diskon1;
    }
    else if (250000 <= totalhrg > 500000)
    {
        diskon = 0.05;
        diskon2 = "5%";
        diskon1 = diskon * totalhrg;

        hargaakhir = totalhrg - diskon1;
    }
    else
    {
        diskon = 0;
        diskon2 = "0%";
        hargaakhir = totalhrg;
    }

    cout << setw(20) << fixed << "\n------------Total Belanja------------\n"
         << endl;
    for (int i = 0; i < jml1.size(); i++)
    {
        cout << left << "Harga " << setw(19) << jml1[i] << ": " << harga << endl;
    }
    cout << setw(25) << left << "Total harga belanja " << ": " << totalhrg << endl;
    cout << setw(25) << left << "Total diskon " << ": " << diskon2 << endl;
    cout << setw(25) << left << "Total harga setelah diskon " << ": " << hargaakhir << endl;
    return 0;
}