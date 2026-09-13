#include "main.h"

int angkaArr[5];
const int angkaTerima = 5;
float totalAngka, average;

int main()
{
    cout << left;
    cout << "\n";

    // Input angka dari user
    for (int a = 0; a < angkaTerima; a++)
    {
        cout << "Masukkan angka nomor " << setw(5) << a + 1 << ": ";
        cin >> angkaArr[a];
        totalAngka += angkaArr[a];
    }

    // Kalkulasi dan display nilai Rata rata
    average = totalAngka / angkaTerima;
    cout << endl
         << setw(26)
         << "Rata-rata" << ": " << fixed << setprecision(2) << average << endl;

    // Rumus standar deviasi
    float varian = 0;
    for (int a = 0; a < angkaTerima; a++)
    {
        varian += pow(angkaArr[a] - average, 2);
    }
    float standarDeviasi = sqrt(varian / (angkaTerima - 1));

    // Display standar deviasi
    cout << setw(26) << "Standar Deviasi" << ": " << fixed << setprecision(2) << standarDeviasi << endl;
    cout << "\n";

    // Output Jenis Variasi standar deviasi
    cout << (standarDeviasi > 2 ? "Variasi Tinggi\n" : "Variasi Rendah\n");

    return 0;
}