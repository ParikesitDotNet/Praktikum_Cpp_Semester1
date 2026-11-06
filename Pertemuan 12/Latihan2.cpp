#include "../global/header.h"

union Buah
{
    int kodeAngka;
    char kodeHuruf;
    float hargaPromo;
} dataBuah;

int main()
{
    dataBuah.kodeAngka = 1;
    dataBuah.kodeHuruf = 'A';
    cout << "Kode buah: " << dataBuah.kodeAngka << endl;
    cout << "Kode huruf: " << dataBuah.kodeHuruf;
    return 0;
}
