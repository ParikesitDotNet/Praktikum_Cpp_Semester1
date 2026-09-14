#include "header.h"

int main()
{
    // Deklarasi Variabel
    string nama;
    float jamKerja, tarif, totalGaji;

    // Input data nama, jam kerja, dan tarif per jam user
    cout << left;
    cout << "=======================================\n";
    cout << setw(27) << "Masukkan Nama" << ": ";
    getline(cin, nama);
    cout << setw(27) << "Total Jam Kerja per Bulan" << ": ";
    cin >> jamKerja;
    cout << setw(27) << "Tarif per Jam(Rp)" << ": ";
    cin >> tarif;

    // Kalkulasi Total gaji
    totalGaji = jamKerja * tarif;

    // Output
    cout << left;
    cout << "=======================================\n";
    cout << setw(27) << "Nama Karyawan" << ": " << nama << endl;
    cout << setw(27) << "Total Jam Kerja" << ": " << jamKerja << " Jam" << endl;
    cout << setw(27) << "Tarif per Jam" << ": Rp " << tarif << endl;
    cout << setw(27) << "Total Gaji" << ": Rp " << fixed << setprecision(0) << totalGaji << endl;
    return 0;
}
