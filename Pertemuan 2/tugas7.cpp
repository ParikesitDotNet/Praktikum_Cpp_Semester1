#include "../global/header.h"

int main()
{
    float suhu[5];
    float total = 0;

    // Input suhu dari user
    cout << "RATA-RATA SUHU 5 HARI" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan suhu hari ke-" << (i + 1) << ": ";
        cin >> suhu[i];
        total = total + suhu[i];
    }
    // Menampilkan hasil rata-rata suhu
    cout << left;
    cout << "Data suhu selama 5 hari:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Hari ke-" << (i + 1) << ": " << fixed << setprecision(1) << suhu[i] << " C" << endl;
    }

    // Menghitung rata-rata suhu
    float rata_rata = total / 5;
    cout << "Rata-rata suhu selama 5 hari: " << fixed << setprecision(1) << rata_rata << " C" << endl;

    return 0;
}
