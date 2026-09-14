#include "header.h"
#include <cmath>

int main()
{
    int jumlah;
    float nilai, total = 0, ratarata;
    cout << "masukkan nilai yang ingin dimasukkan (minimal 3) : ";
    cin >> jumlah;
    while (jumlah < 3)
    {
        cout << "Jumlah mata pelajaran minimal 3. Masukkan lagi : ";
        cin >> jumlah;
    }
    for (int i = 1; i <= jumlah; i++)
    {
        cout << "Masukkan Nilai pelajaran ke - " << i << " : ";
        cin >> nilai;
        total += nilai;
    }
    ratarata = total / jumlah;
    cout << fixed << setprecision(2);
    cout << "___________________Hasil___________________" << endl;
    cout << "|" << setw(21) << "rata-rata = " << ratarata << setw(17) << "|" << endl;
    if (ratarata > 85)
    {
        cout << left << "Kategori Prestasi = Sangat Baik" << endl;
    }
    else if (ratarata >= 70)
    {
        cout << left << "Kategori Prestasi = Baik" << endl;
    }
    else if (ratarata >= 50)
    {
        cout << left << "|Kategori Prestasi = Cukup" << setw(18) << "|" << endl;
    }
    else
    {
        cout << left << "| Kategori Prestasi = Perlu Ditingkatkan  |" << endl;
    }
    cout << "-------------------------------------------";
    return 0;
}
