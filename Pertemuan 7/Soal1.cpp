#include "../global/header.h"

int hitungJumlah(vector<int> arrList)
{
    return accumulate(arrList.begin(), arrList.end(), 0);
}

int main()
{
    vector<int> angka = {2, 4, 6, 8};
    cout << "Total Jumlah: " << hitungJumlah(angka) << endl;

    return 0;
}
