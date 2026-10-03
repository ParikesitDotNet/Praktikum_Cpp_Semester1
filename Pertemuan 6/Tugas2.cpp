#include "../global/header.h"

int main()
{
    int maxRange = 100;
    int listHarga[100];

    for (int i = 1; i <= maxRange; i++)
    {
        int addedHarga;
        addedHarga = i % 20 == 0 ? i * 60 : i * 80;

        listHarga[i - 1] = addedHarga;
    }

    cout << left;
    for (int i = 0; i < maxRange; i++)
    {
        cout << setw(4) << "|" << setw(4) << i + 1 << setw(3) << "|" << setw(6) << listHarga[i] << "|" << endl;
    }

    return 0;
}