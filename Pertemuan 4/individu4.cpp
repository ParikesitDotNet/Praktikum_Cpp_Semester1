#include "../global/header.h"

int main()
{
    int pilihanUser;
    bool isUlangi = true;

    while (isUlangi)
    {
        int jumlahMapel = 0;
        float nilaiAvg = 0;
        float totalNilai = 0;
        string statusPrestasi = "";

        do
        {
            cout << "Masukkan jumlah mata pelajaran: ";
            cin >> jumlahMapel;

            if (jumlahMapel < 3)
            {
                cout << "Harap masukkan minimal 3 mata pelajaran!";
            }
            cout << endl;
        } while (jumlahMapel < 3);

        float nilaiArr[jumlahMapel];

        for (int i = 0; i < jumlahMapel; i++)
        {
            do
            {
                cout << "Masukkan nilai mata pelajaran ke-" << i + 1 << ": ";
                cin >> nilaiArr[i];

                if (nilaiArr[i] < 0 || nilaiArr[i] > 100)
                {
                    cout << "Harap masukkan nilai dengan rentang 0 - 100 !" << endl
                         << endl;
                }

            } while (nilaiArr[i] < 0 || nilaiArr[i] > 100);

            totalNilai += nilaiArr[i];
        }

        // Kalkulasi Average dan Desicion status prestasi
        nilaiAvg = totalNilai / jumlahMapel;

        if (nilaiAvg > 85)
        {
            statusPrestasi = "Sangat Baik";
        }
        else if (nilaiAvg > 70 && nilaiAvg <= 85)
        {
            statusPrestasi = "Baik";
        }
        else if (nilaiAvg >= 50 && nilaiAvg <= 70)
        {
            statusPrestasi = "Cukup";
        }
        else
        {
            statusPrestasi = "Perlu Peningkatan";
        }

        cout << left << fixed << setprecision(2) << endl;
        cout << setw(20) << "Rata-rata Nilai" << ": " << nilaiAvg << endl;
        cout << setw(20) << "Prestasi" << ": " << statusPrestasi << endl;
        cout << endl;

        // Konfirmasi action user
        do
        {
            cout << "Ingin menghitung nilai untuk siswa lain? (1 untuk ya, 2 untuk tidak): ";
            cin >> pilihanUser;

            if (pilihanUser == 1)
            {
                isUlangi = true;
            }
            else if (pilihanUser == 2)
            {
                isUlangi = false;
            }
            else
                cout << "Mohon masukkan pilihan yang benar!\n";
            cout << endl;
        } while (pilihanUser != 1 && pilihanUser != 2);
    }

    return 0;
}