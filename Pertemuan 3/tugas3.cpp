#include "header.h"

int main()
{
    float hadir;
    float total_hari = 5.0;
    float persentase;

    // input dari user
    cout << "Masukkan jumlah hari kehadiran (0-5): ";
    cin >> hadir;

    // hitung persentase
    persentase = (hadir / total_hari) * 100;

    // tampilkan persentase
    cout << "\n==== Hasil Kehadiran ====" << endl;
    cout << "Persentase Kehadiran   : " << persentase << "%" << endl;

    // tentukan dan tampilkan status
    if (persentase > 75)
    {
        cout << "Status Kehadiran       : Kehadiran Baik" << endl;
    }
    else if (persentase >= 50)
    {
        cout << "Status Kehadiran       : Kehadiran Cukup" << endl;
    }
    else
    {
        cout << "Status Kehadiran       : Kehadiran Kurang" << endl;
    }
    return 0;
}
