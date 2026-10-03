#include "../global/header.h"

const char vokals[5] = {'a', 'i', 'u', 'e', 'o'};

int main()
{
    int maxChar = 1000;
    int vokal = 0, konsonan = 0, karLain = 0, karNg = 0;
    char inputStr[maxChar];

    // Input
    cout << "Masukkan kalimat (maximal 1000 karakter, termasuk spasi): ";
    cin.getline(inputStr, maxChar);

    // Get length of inputStr
    int inputCount = strlen(inputStr);

    for (int i = 0; i < inputCount; i++)
    {
        char lowerChar = tolower(inputStr[i]);

        // Check huruf alpabaet
        if (!isalpha(lowerChar))
        {
            karLain += 1;
            continue;
        }

        bool isVokal = false;

        // Loop check huruf vokal
        for (int j = 0; j < size(vokals); j++)
        {
            if (lowerChar == vokals[j])
            {
                isVokal = true;
                break;
            }
        }

        // Assignment karakter ng, vokal dan konsonan
        if (i > 0 && (tolower(inputStr[i - 1]) == 'n' && lowerChar == 'g'))
            karNg += 1;

        if (isVokal)
            vokal += 1;
        else
            konsonan += 1;
    }

    // Outputs
    cout << left << endl;
    cout << setw(30) << "Banyaknya huruf vokal" << ": " << vokal << endl
         << setw(30) << "Banyaknya huruf konsonan" << ": " << konsonan << endl
         << setw(30) << "Banyak karakter non alphabet" << ": " << karLain << endl
         << setw(30) << "Banyaknya karakter 'ng'" << ": " << karNg << endl;
    return 0;
}