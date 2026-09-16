#include "../global/header.h"
#include <cmath>

int main()
{
    // Deklarasi Variabel
    int jumlah;
    float nilai, total = 0, ratarata;

    // Input variabel "Jumlah"
    cout << "masukkan nilai yang ingin dimasukkan (minimal 3) : ";
    cin >> jumlah;

    // Input dan validasi mapel
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

    // Kalkulasi rata-rata
    ratarata = total / jumlah;

    // Output Rata-rata
    cout << fixed << setprecision(2);
    cout << "___________________Hasil___________________" << endl;
    cout << "|" << setw(21) << "rata-rata = " << ratarata << setw(17) << "|" << endl;

    // Output tingkat prestasi
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
