#include "../global/header.h"

void main()
{
    int userAge;
    int *pUmur;

    cout << "Masukkan Umurmu: ";
    cin >> userAge;

    pUmur = &userAge;

    cout << left << endl;

    cout << setw(30) << "Umur aslimu" << ": " << userAge << endl;
    cout << setw(30) << "Umur aslimu melalui pointer" << ": " << *pUmur << endl;
    cout << setw(30) << "Alamat Umurmu melalui pUmur" << ": " << pUmur << endl;
    // cout << setw(30) << "Umurmu melalui pUmur" << ": " << *pUmur << endl;
}
