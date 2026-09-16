#include "../global/header.h"
int main()
{
    float listrik, tagihan, diskon = 0, hargaAkhir;

    // Input variabel "listrik"
    cout << "Masukkan penggunaan listrik dalam sebulan (kWh): ";
    cin >> listrik;

    // Kalkulasi tagihan
    if (listrik <= 100)
    {
        tagihan = listrik * 1500;
    }

    else if (listrik <= 300)
    {
        tagihan = (100 * 1500) + ((listrik - 100) * 2000);
    }

    else
    {
        tagihan = (100 * 1500) + (200 * 2000) + ((listrik - 300) * 3000);
    }

    if (tagihan > 1000000)
    {
        diskon = tagihan * 0.10;
    }

    hargaAkhir = tagihan - diskon;

    // output
    cout << "Total penggunaan listrik dalam kWh: " << listrik << " kWh" << endl;
    cout << "Total tagihan sebelum diskon: Rp " << fixed << setprecision(0) << tagihan << endl;
    cout << "Diskon yang diberikan: Rp " << diskon << endl;
    cout << "Total tagihan setelah diskon: Rp " << fixed << setprecision(0) << hargaAkhir << endl;
    return 0;
}
