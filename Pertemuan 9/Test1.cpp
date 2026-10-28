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
    cout << setw(30) << "Umur aslimu via pointer" << ": " << *pUmur << endl;
    cout << setw(30) << "Alamat Umurmu via pUmur" << ": " << pUmur << endl;
    // cout << setw(30) << "Umurmu via pUmur" << ": " << *pUmur << endl;
}
