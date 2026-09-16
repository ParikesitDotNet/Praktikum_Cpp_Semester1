#include "../global/header.h"

int main()
{
    int pilihanUser;
    bool isUlangi = true;

    cout << "Silahkan masukkan belanjaan anda! \n";
    cout << endl;

    while (isUlangi)
    {
        int jumlahBarang = 0;
        float totalHarga = 0;
        float outputHarga = 0;

        // Input jumlah barang
        cout << left;
        cout << setw(25) << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;
        cout << endl;

        float listHargaBarangArr[jumlahBarang];

        // Looping total barang dan input harga masing-masing barang
        for (int i = 0; i < jumlahBarang; i++)
        {
            cout << "Masukkan harga barang ke-" << i + 1 << ": Rp ";
            cin >> listHargaBarangArr[i];
            totalHarga += listHargaBarangArr[i];
        }

        // Desicion output harga
        if (totalHarga > 500000)
            outputHarga = Discounts::giveDiscount(10, totalHarga);

        else if (totalHarga >= 250000 && totalHarga <= 500000)
            outputHarga = Discounts::giveDiscount(5, totalHarga);

        else
            outputHarga = totalHarga;

        // Output
        cout << endl;
        cout << setw(25) << "Total Harga" << ": Rp " << totalHarga << endl;
        cout << setw(25) << "Diskon" << ": Rp " << totalHarga - outputHarga << endl;
        cout << setw(25) << "Total Setelah Diskon" << ": Rp " << outputHarga << endl;
        cout << endl;

        // Konfirmasi action user
        do
        {
            cout << "Ingin menambahkan belanjaan lagi? (1 untuk ya, 2 untuk tidak): ";
            cin >> pilihanUser;

            if (pilihanUser == 1)
            {
                isUlangi = true;
                cout << "Silahkan masukkan kembali harga belanjaan anda!\n";
            }
            else if (pilihanUser == 2)
            {
                isUlangi = false;
                cout << "Terimakasih telah menggunakan program ini!\n";
            }
            else
                cout << "Mohon masukkan pilihan yang benar!\n";
            cout << endl;

        } while (pilihanUser != 1 && pilihanUser != 2);
    }

    return 0;
}