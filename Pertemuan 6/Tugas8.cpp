#include "../global/header.h"

int main()
{
    vector<float> listAngka;
    int angkaKe = 1;

    while (true)
    {
        float angkaInput = 0;
        string isFinish;

        cout << "Tambahkan angka ke-" << angkaKe << ": ";
        cin >> angkaInput;

        angkaKe = angkaKe + 1;
        listAngka.push_back(angkaInput);

        cout << "Ingin memasukkan angka lagi? (Y/n): ";
        cin >> isFinish;
        cout << endl;

        if (isFinish == "n" || isFinish == "N")
            break;
    }

    float average = Statistika::average(listAngka.data(), listAngka.size());
    float standarDeviasi = Statistika::standarDeviasi(average, listAngka.data(), listAngka.size());

    cout << "Rata-rata (mean): " << average << endl
         << "Standar Deviasi: " << standarDeviasi << endl;

    return 0;
}