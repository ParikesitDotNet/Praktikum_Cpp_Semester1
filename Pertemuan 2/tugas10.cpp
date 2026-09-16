#include "../global/header.h"

int main()
{
    cout << "|-------+--------------+--------------+--------------|" << endl;
    cout << "|" << setw(8) << "Meter|"
         << setw(15) << "centimeter|"
         << setw(15) << "Milimeter|"
         << setw(15) << "Kilometer|" << endl;
    cout << "|-------+--------------+--------------+--------------|" << endl;
    for (int i = 1; i < 11; i++)
    {
        cout << "|" << setw(7) << i << "|"
             << setw(14) << i * 100 << "|"
             << setw(14) << i * 1000 << "|"
             << setw(14) << fixed << setprecision(3) << i / 1000.0 << "|" << endl;
        cout << "|-------+--------------+--------------+--------------|" << endl;
    }
}
