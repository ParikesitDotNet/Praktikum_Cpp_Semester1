#include "../global/header.h"

int main()
{
    int pilihanUser;
    bool isUlangi = true;

    while (isUlangi)
    {

        int kehadiranArr[5];
        float jumlahHari = 5;
        float totalKehadiran = 0;
        float presentaseKehadiran;
        string statusKehadiran = "";

        // Loop kehadiran input
        for (int i = 0; i < 5; i++)
        {
            int userInput = 0;
            do
            {
                cout << "Apakah mahasiswa hadir di hari ke-" << i + 1 << "? (1 untuk hadir, 0 untuk tidak hadir): ";
                cin >> kehadiranArr[i];
                userInput = kehadiranArr[i];

                if (userInput != 1 && userInput != 0)
                    cout << "Input tidak valid, silahkan masukkan input yang sesuai!" << endl;

            } while (userInput != 1 && userInput != 0);

            totalKehadiran += kehadiranArr[i];
        }

        presentaseKehadiran = (totalKehadiran / jumlahHari) * 100;

        // Status Kehadiran Decision
        if (presentaseKehadiran > 75)
            statusKehadiran = "Baik";

        else if (presentaseKehadiran >= 50 && presentaseKehadiran <= 75)
            statusKehadiran = "Cukup";

        else
            statusKehadiran = "Kurang";

        // Output
        cout << endl;
        cout << left;
        cout << setw(25) << "Presentasi Kehadiran" << ": " << presentaseKehadiran << "%" << endl;
        cout << setw(25) << "Status Kehadiran" << ": " << statusKehadiran << endl;
        cout << endl;

        do
        {
            cout << "Ingin mengecek kehadiran untuk mahasiswa lain? (1 untuk ya, 2 untuk tidak): ";
            cin >> pilihanUser;

            if (pilihanUser == 1)
                isUlangi = true;

            else if (pilihanUser == 2)
                isUlangi = false;

            else
                cout << "Mohon masukkan pilihan yang benar!\n";
            cout << endl;

        } while (pilihanUser != 1 && pilihanUser != 2);
    }
    return 0;
}