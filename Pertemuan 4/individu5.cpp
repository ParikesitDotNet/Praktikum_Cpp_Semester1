#include "../global/header.h"

int main()
{
    int pilihanUser;
    bool isUlangi = true;
    string itemLists[4] = {"Makanan", "Transportasi", "Hiburan", "Lain-lain"};

    while (isUlangi)
    {
        int jumlahHari = 7;
        int itemListsIndexes[jumlahHari];
        float pengeluaranArr[jumlahHari];
        float pengeluaranTerbesar = 0, totalPengeluaran = 0;

        string kategoriTerbesar = "";

        // Looping input kategori dan jumlah
        for (int i = 0; i < jumlahHari; i++)
        {
            string selectedType;
            float pengeluaranHari = 0;

            // Input kategori
            cout << "Masukkan kategori pengeluaran hari ke-" << i + 1 << "(Makanan/Transportasi/Hiburan/Lain-lain): ";
            cin >> selectedType;

            // Kategori Decision
            if (selectedType == "Makanan")
            {
                itemListsIndexes[i] = 0;
            }
            else if (selectedType == "Transportasi")
            {
                itemListsIndexes[i] = 1;
            }
            else if (selectedType == "Hiburan")
            {
                itemListsIndexes[i] = 2;
            }
            else
            {
                itemListsIndexes[i] = 3;
            }

            // Input dan sigma total pengeluaran
            cout << "Masukkan jumlah pengeluaran" << ": Rp ";
            cin >> pengeluaranArr[i];
            totalPengeluaran += pengeluaranArr[i];
        }

        // Deklarasi array item {Makanan,Transportasi,Hiburan,Lain-lain}
        float totalPerItem[4] = {0, 0, 0, 0};

        for (int i = 0; i < jumlahHari; i++)
        {
            // Mencari Nilai Terbesar
            if (pengeluaranArr[i] > pengeluaranTerbesar)
            {
                pengeluaranTerbesar = pengeluaranArr[i];
                kategoriTerbesar = itemLists[itemListsIndexes[i]];
            }

            // Total masing-masing items
            switch (itemListsIndexes[i])
            {
            case 0:
                totalPerItem[0] += pengeluaranArr[i];
                break;
            case 1:
                totalPerItem[1] += pengeluaranArr[i];
                break;
            case 2:
                totalPerItem[2] += pengeluaranArr[i];
                break;
            default:
                totalPerItem[3] += pengeluaranArr[i];
                break;
            }
        }

        // Outputs
        cout << left << fixed << setprecision(2) << endl;

        // Output masing-masing pengeluaran
        for (int i = 0; i < 4; i++)
        {
            cout << "Total Pengeluaran " << setw(20) << itemLists[i] << ": Rp " << totalPerItem[i] << endl;
        }

        // Output Total pengeluaran seminggu dan terbesar
        cout << endl;
        cout << setw(38) << "Total Pengeluaran Selama Seminggu" << ": Rp " << totalPengeluaran << endl;
        cout << setw(38) << "Pengeluaran Terbesar" << ": Rp " << pengeluaranTerbesar << " pada kategori " << kategoriTerbesar << endl;
        cout << endl;
        // Konfirmasi action user
        do
        {
            cout << "Ingin mencatat pengeluaran untuk minggu lain? (1 untuk ya, 2 untuk tidak): ";
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