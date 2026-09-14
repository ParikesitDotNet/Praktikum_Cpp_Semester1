#include "header.h"

int main()
{
    // Deklarasi Vairabel
    string nama, usia, nim, email, offering;
    float tinggiBadan;
    double nilaiIpk;
    bool isLulus;

    // Input data nama dan usia user
    cout << setw(35) << "==Input Data==" << endl;
    cout << "Masukkan Nama = ";
    getline(cin, nama);
    cout << "Masukkan Usia = ";
    cin >> usia;

    // Input dan Validasi NIM
    do
    {
        cout << "Masukkan NIM = ";
        cin >> nim;
        if (nim.length() != 12)
        {
            cout << "NIM Tidak Valid!" << endl;
        }
    } while (nim.length() != 12);

    // Input data Kelas Offering, Email, Tinggi Badan, dan Nilai IPK
    cout << "Masukkan Offering = ";
    cin >> offering;
    cout << "Masukkan Email = ";
    cin >> email;
    cout << "Masukkan Tinggi Badan = ";
    cin >> tinggiBadan;
    cout << "Masukkan Nilai IPK = ";
    cin >> nilaiIpk;
    isLulus = (nilaiIpk >= 3.0);

    // Output semua data yang telah dimasukkan oleh user
    cout << endl;
    cout << "|" << setw(34) << "==Kelulusan==" << endl;
    cout << left;
    cout << setw(20) << "Nama Lengkap" << ":" << nama << endl;
    cout << setw(20) << "Usia" << ":" << usia << "tahun" << endl;
    cout << setw(20) << "NIM" << ":" << nim << endl;
    cout << setw(20) << "Offering" << ":" << offering << endl;
    cout << setw(20) << "Email" << ":" << email << endl;
    cout << setw(20) << "Tinggi Badan" << ":" << fixed << setprecision(2) << tinggiBadan << endl;
    cout << setw(20) << "Status kelulusan" << ":" << (isLulus ? "Lulus" : "Tidak Lulus") << endl;
    return 0;
}
