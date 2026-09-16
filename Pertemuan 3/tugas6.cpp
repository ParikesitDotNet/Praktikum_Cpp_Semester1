#include "../global/header.h"

int main()
{
    const int totalHari = 7;
    const int jenisKategori = 4;

    string kategori[jenisKategori] = {
        "Makanan",
        "Transportasi",
        "Hiburan",
        "Lain-lain"};

    double totalKategori[jenisKategori] = {0};
    double pengeluaran[totalHari];

    int pilihanKategori[totalHari];

    double pengeluaranTerbesar = 0;
    int kategoriTerbesar = 0;
    int hariTerbesar = 0;

    // Input pengeluaran selama 7 hari
    for (int a = 0; a < totalHari; a++)
    {
        cout << "\n=== Hari ke-" << a + 1 << " ===" << endl;

        cout << "Pilih kategori:" << endl;
        cout << "1. Makanan" << endl;
        cout << "2. Transportasi" << endl;
        cout << "3. Hiburan" << endl;
        cout << "4. Lain-lain" << endl;

        do
        {
            cout << "Masukkan pilihan kategori (1-4): ";
            cin >> pilihanKategori[a];
            if (pilihanKategori[a] < 1 || pilihanKategori[a] > 4)
            {
                cout << "Opsi tidak Valid" << endl;
            }

        } while (pilihanKategori[a] < 1 || pilihanKategori[a] > 4);

        cout << "Masukkan jumlah pengeluaran: Rp";
        cin >> pengeluaran[a];

        // Ubah pilihan menjadi index array
        int index = pilihanKategori[a] - 1;

        // Tambahkan ke total kategori
        totalKategori[index] += pengeluaran[a];

        // Cari pengeluaran terbesar
        if (pengeluaran[a] > pengeluaranTerbesar)
        {
            pengeluaranTerbesar = pengeluaran[a];
            kategoriTerbesar = index;
            hariTerbesar = a;
        }
    }

    // Menampilkan hasil
    cout << "\n======================================" << endl;
    cout << "       HASIL PENGELUARAN SEMINGGU" << endl;
    cout << "======================================" << endl;

    // Total per kategori
    cout << "\nTotal Pengeluaran per Kategori:" << endl;

    for (int i = 0; i < jenisKategori; i++)
    {
        cout << kategori[i] << " : Rp"
             << fixed << setprecision(0)
             << totalKategori[i] << endl;
    }

    // Pengeluaran terbesar
    cout << "\nPengeluaran Terbesar Keseluruhan:" << endl;
    cout << "Hari       : Hari ke-" << hariTerbesar + 1 << endl;
    cout << "Kategori   : " << kategori[kategoriTerbesar] << endl;
    cout << "Jumlah     : Rp"
         << fixed << setprecision(0)
         << pengeluaranTerbesar << endl;

    // Total seluruh pengeluaran selama seminggu
    double totalSeminggu = 0;

    for (int i = 0; i < jenisKategori; i++)
    {
        totalSeminggu += totalKategori[i];
    }

    cout << "\nTotal Pengeluaran Selama Seminggu: Rp"
         << fixed << setprecision(0)
         << totalSeminggu << endl;

    return 0;
}