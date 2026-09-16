#include "../global/header.h"

// Deklarasi Variabel
string fullName;
string nim;
string offering;

int age;
double averageScore;
float height;
float nilaiIPK;
bool isPassed;

int main()
{
    cout << left;

    // Input data dari user dengan kerapian setw(20)
    cout << "" << endl;
    cout << setw(20) << "Nama Lengkap" << ": ";
    getline(cin, fullName);

    cout << setw(20) << "NIM" << ": ";
    cin >> nim;

    cout << setw(20) << "Kelas Offering" << ": ";
    cin >> offering;

    cout << setw(20) << "Usia" << ": ";
    cin >> age;

    cout << setw(20) << "Tinggi Badan" << ": ";
    cin >> height;

    cout << setw(20) << "Nilai Rata Rata" << ": ";
    cin >> averageScore;

    cout << setw(20) << "Nilai IPK" << ": ";
    cin >> nilaiIPK;

    if (nilaiIPK > 2.0)
    {
        isPassed = true;
    }
    else
    {
        isPassed = false;
    }

    // Output List table dengan kerapian setw(20)
    cout << "" << endl;
    cout << setw(20) << "Nama Lengkap" << ": " << fullName << endl;
    cout << setw(20) << "Usia" << ": " << age << " Tahun" << endl;
    cout << setw(20) << "Tinggi Badan" << ": " << height << "cm" << endl;
    cout << setw(20) << "Nilai Rata Rata" << ": " << fixed << setprecision(2) << averageScore << endl;
    cout << setw(20) << "Status Kelulusan" << ": " << (isPassed ? "Lulus" : "Gagal") << endl;
    cout << setw(20) << "NIM" << ": " << nim << endl;
    cout << setw(20) << "Kelas Offering" << ": " << offering << endl;
    cout << setw(20) << "Nilai IPK" << ": " << fixed << setprecision(2) << nilaiIPK << endl;

    return 0;
}