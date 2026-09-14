#include "header.h"

int main()
{
    // Kumpulan Data //
    double idr;
    int uang;
    double kurs, hasil;
    string matauang;

    // Input Data //

    cout << setw(40) << "===========Konversi Mata Uang===========" << endl;
    cout << left << setw(40) << "Masukkan Tujuan Mata Uang Konversi " << ": ";
    cin >> matauang;
    cout << left << setw(40) << "Masukkan Jumlah Mata Uang Dalam Rupiah " << ": ";
    cin >> idr;
    do
    {
        cout << left << setw(40) << "Pilih Format Kurs Mata Uang " << ": " << endl;
        cout << setw(10) << "1. Rupiah  ";
        cout << "2. Mata Uang Lain" << endl;
        cin >> uang;

        if (uang == 1)
        {
            cout << left << setw(40) << "Masukkan Nilai Kurs" << ": ";
            cin >> kurs;

            hasil = idr / kurs;
        }

        else if (uang == 2)
        {
            cout << left << setw(40) << "Masukkan Nilai Kurs" << ": ";
            cin >> kurs;

            hasil = idr * kurs;
        }

        else
        {

            cout << left << setw(40) << "Masukkan Format Kurs Sesuai Pilihan" << endl;
        }
    } while (uang != 1 && uang != 2);

    // Output Data //

    do
    {
        if (uang == 1)
        {
            cout << setw(40) << "===========Konversi Mata Uang===========" << endl;
            cout << left << setw(40) << "Jenis Mata Uang Konversi" << ": " << matauang << endl;
            cout << left << setw(40) << "Jumlah Mata Uang" << ": Rp" << idr << endl;
            cout << left << setw(40) << "Nilai Tukar Kurs saat ini" << ": " << fixed << setprecision(2) << kurs << endl;
            cout << left << setw(40) << "Hasil Konversi Mata Uang" << ": " << fixed << setprecision(2) << hasil << endl;
        }

        else if (uang == 2)
        {
            cout << setw(40) << "===========Konversi Mata Uang===========" << endl;
            cout << left << setw(40) << "Jenis Mata Uang Konversi" << ": " << matauang << endl;
            cout << left << setw(40) << "Jumlah Mata Uang" << ": Rp" << idr << endl;
            cout << left << setw(40) << "Nilai Tukar Kurs saat ini" << ": " << fixed << setprecision(6) << kurs << endl;
            cout << left << setw(40) << "Hasil Konversi Mata Uang" << ": " << fixed << setprecision(2) << hasil << endl;
        }

    } while (uang == 1 && uang == 2);
    return 0;
}
