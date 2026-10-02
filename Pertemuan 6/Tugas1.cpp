#include "../global/header.h"
#include <cctype>

// int main()
// {
//     // Array karakter maks 100 karakter + 1 untuk null-terminator ('\0')
//     char kata[101];
//     char balik[101];
//     int panjang = 0;
//     bool isPalindrom = true;

//     cout << "Masukkan kata (maks. 100 karakter): ";

//     // Membaca input termasuk spasi menggunakan cin.getline
//     cin.getline(kata, 101);

//     panjang = strlen(kata);

//     // 1. Membalik kata menggunakan indeks array
//     for (int i = 0; i < panjang; i++)
//     {
//         balik[i] = kata[panjang - 1 - i];
//     }
//     balik[panjang] = '\0'; // Null-terminator penanda akhir string

//     // Tampilkan hasil pembalikan
//     cout << "Hasil dibalik : " << balik << endl;

//     // 2. Cek apakah palindrom (case-insensitive)
//     for (int i = 0; i < panjang; i++)
//     {
//         if (tolower(static_cast<unsigned char>(kata[i])) !=
//             tolower(static_cast<unsigned char>(balik[i])))
//         {
//             isPalindrom = false;
//             break;
//         }
//     }

//     cout << (panjang > 0 && isPalindrom ? "Pesan Khusus  : *** KATA INI ADALAH PALINDROM! ***" : "Pesan Khusus  : Kata ini bukan palindrom.") << endl;

//     return 0;
// }

int main()
{
    // Declaration
    int maxChar = 101;
    char inputChar[maxChar];
    char outputChar[maxChar];

    // Get Input
    cout << "Masukkan kata yang ingin di input: ";
    cin.getline(inputChar, maxChar);

    // Measure Input Length
    int inputLength = strlen(inputChar);

    // Flip Words
    for (int i = 0; i < inputLength; i++)
    {
        outputChar[i] = inputChar[inputLength - i - 1];
    }

    outputChar[inputLength] = '\0';

    // Display Output
    cout << endl;
    cout << "Hasil bailk: " << outputChar << endl;

    // Palindrom Statement
    cout << (strcmp(inputChar, outputChar) == 0 ? "Kata adalah Palindrom" : "") << endl;
}