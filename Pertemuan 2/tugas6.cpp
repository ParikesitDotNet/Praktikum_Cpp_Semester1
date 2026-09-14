#include "header.h"
#include <cmath>

int main()
{

    // Susunan Data //
    string nama;
    int umur;
    int kelamin;
    float tinggi;
    float berat;
    int intensitas;

    // Susunan Data Perhitungan //

    float hasil = 0;
    float bmr = 0;
    float bmi = 0;
    float t2 = 0;
    string imt;

    cout << setw(30) << "========Penghitung Kalori Harian========" << endl;
    cout << left << setw(30) << "Masukkan Nama " << ": ";
    getline(cin, nama);

    cout << left << setw(30) << "Masukkan Umur " << ": ";
    cin >> umur;
    cout << left << setw(30) << "Masukkan Tinggi Badan " << ": ";
    cin >> tinggi;
    cout << left << setw(30) << "Masukkan Berat Badan " << ": ";
    cin >> berat;

    // Input Jenis Kelamin //

    do
    {
        cout << left << setw(30) << "Masukkan Jenis Kelamin" << ": " << endl;
        cout << left << setw(15) << "1. Laki-laki  ";
        cout << "2. Perempuan  " << endl;
        cin >> kelamin;
        if (kelamin == 1)
        {
            bmr = (10 * berat) + (6.25 * tinggi) - (5 * umur) + 5;
        }
        else if (kelamin == 2)
        {
            bmr = (10 * berat) + (6.25 * tinggi) - (5 * umur) - 161;
        }
        else
        {
            cout << left << setw(30) << "Masukkan Jenis Kelamin yang Sesuai" << endl;
        }
    } while (kelamin != 1 && kelamin != 2);

    // Input Intensitas //

    do
    {
        cout << left << setw(30) << "Masukkan Tingkat Intensitas Aktivitas Fisik" << ": " << endl;
        cout << left << setw(10) << "1. Jarang  ";
        cout << "2. Ringan  ";
        cout << "3. Sedang" << endl;
        cout << left << setw(15) << "4. Berat  ";
        cout << "5. SangatBerat" << endl;
        cin >> intensitas;

        if (intensitas == 1)
        {
            hasil = bmr * 1.2;
        }
        else if (intensitas == 2)
        {
            hasil = bmr * 1.375;
        }
        else if (intensitas == 3)
        {
            hasil = bmr * 1.55;
        }
        else if (intensitas == 4)
        {
            hasil = bmr * 1.725;
        }
        else if (intensitas == 5)
        {
            hasil = bmr * 1.9;
        }
        else
        {
            cout << left << setw(30) << "Tolong Masukkan Sesuai Pilihan!" << endl;
        }
    } while (intensitas != 1 && intensitas != 2 && intensitas != 3 && intensitas != 4 && intensitas != 5);

    t2 = tinggi / 100;

    bmi = berat / pow(t2, 2);

    do
    {
        if (bmi < 18.5)
        {
            imt = "Underweight";
        }

        else if (bmi >= 18.5 && bmi <= 22.9)
        {
            imt = "ideal";
        }

        else if (bmi >= 23.0 && bmi <= 24.9)
        {
            imt = "overweight";
        }

        else if (bmi <= 25.0 && bmi >= 29.9)
        {
            imt = "Obesitas Tingkat 1";
        }

        else if (bmi > 30.0)
        {
            imt = "Obesitas Tingkat 2";
        }

    } while (bmi == 0);

    // Output Data //

    cout << setw(30) << "=================Hasil  Data=================" << endl;
    cout << left << setw(30) << "Nama" << ": " << nama << endl;
    cout << left << setw(30) << "Umur" << ": " << umur << endl;
    cout << left << setw(30) << "Tiggi Badan" << ": " << tinggi << " cm" << endl;
    cout << left << setw(30) << "Berat Badan" << ": " << berat << " kg" << endl;
    cout << left << setw(30) << "Kebutuhan Kalori Harian" << ": " << hasil << "kkal" << endl;
    cout << left << setw(30) << "Indeks Massa Tubuh" << ": " << imt << endl;
    return 0;
}
