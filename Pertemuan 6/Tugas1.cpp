#include "../global/header.h"
#include <algorithm>

int main()
{
    string inputText = "eye";
    string afterText = inputText;

    reverse(afterText.begin(), afterText.end());

    cout << afterText << endl;
    cout << inputText << endl;

    if (afterText == inputText)
        cout << "Kata yang dibalik adalah tipe kata palindrom\n";

    return 0;
}