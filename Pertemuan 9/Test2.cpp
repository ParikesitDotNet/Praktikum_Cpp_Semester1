#include "../global/header.h"

void tambahNilai(int *p)
{
    *p = *p + 5;
}

void main()
{
    int nilai = 70;
    int *pNilai;

    pNilai = &nilai;

    cout << "Nilai Sebelum Perubahan: " << *pNilai << endl;
    tambahNilai(pNilai);
    cout << "Nilai Setelah Perubahan: " << *pNilai << endl;
}