#include "header.h"

int main()
{
    // Biodata dan Gaji
    string nama;
    float jamKerja, tarif, totalGaji;

    cout << left;
    cout << "=======================================\n";
    cout << setw(27) << "Masukkan Nama" << ": ";
    getline(cin, nama);
    cout << setw(27) << "Total Jam Kerja per Bulan" << ": ";
    cin >> jamKerja;
    cout << setw(27) << "Tarif per Jam(Rp)" << ": ";
    cin >> tarif;

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
