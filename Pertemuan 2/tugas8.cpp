#include "header.h"

int main()
{
    float a, b, c;
    cout << "_____Silahkan Masukkan Data_____" << endl;
    cout << "Masukkan Jarak = ";
    cin >> a;
    cout << "Masukkan Konsumsi BBM Berapa liter per km = ";
    cin >> b;
    cout << "Harga BBM perLiter = Rp ";
    cin >> c;
    cout << endl;

    float hasil = a * b * c;
    cout << "_____Hasil_____" << endl;
    cout << "Biaya Bahan Bakar Perjalanan = Rp ";
    cout << hasil;
    return 0;
}
