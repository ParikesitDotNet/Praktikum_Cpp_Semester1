#include "../global/header.h"

int hitungJumlah(vector<int> arrList)
{
    // int total = 0;
    // for (int i = 0; i < size(arrList); i++)
    // {
    //     total += arrList[i];
    // }

    return accumulate(arrList.begin(), arrList.end(), 0);
}

int main()
{
    vector<int> angka = {2, 4, 6, 20};
    cout << "Total Jumlah: " << hitungJumlah(angka) << endl;

    return 0;
}
