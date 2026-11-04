#include "../global/header.h"

enum TingkatMatang
{
    Mentah,
    Matang,
    SangatMatang
};

int main()
{
    int inputNum;
    string messageOutput;

    cout << "Masukkan kondisi makanan (0: Mentah; 1: Matang; 2: Terlalu Matang): ";
    cin >> inputNum;

    TingkatMatang kematangan = static_cast<TingkatMatang>(inputNum);
    switch (kematangan)
    {
    case Mentah:
        messageOutput = "Makanan masih mentah";
        break;

    case Matang:
        messageOutput = "Makanan telah matang";
        break;

    case SangatMatang:
        messageOutput = "Makanan telalu matang";
        break;

    default:
        messageOutput = "Kondisi makanan tidak diketahui";
        break;
    }

    cout << messageOutput << endl;

    return 0;
}
