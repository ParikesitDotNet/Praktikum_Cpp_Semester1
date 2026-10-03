#include "../global/header.h"

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