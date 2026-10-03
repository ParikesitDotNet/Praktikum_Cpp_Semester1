#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

namespace Discounts
{
    float giveDiscount(float persen, float harga)
    {
        float theDiscountedHarga = harga - (harga * (persen / 100.0));
        return theDiscountedHarga;
    }
}

namespace Statistika
{
    float average(float angkaArr[], int angkaArrSize)
    {
        if (angkaArrSize <= 1)
            return 0.0f;

        float sum = 0;
        for (int i = 0; i < angkaArrSize; i++)
        {
            sum += angkaArr[i];
        }
        return sum / angkaArrSize;
    }

    float standarDeviasi(float average, float angkaArr[], int angkaArrSize)
    {
        if (angkaArrSize <= 1)
        {
            return 0.0f;
        }

        float varian = 0.0f;
        for (int a = 0; a < angkaArrSize; a++)
        {
            float selisih = angkaArr[a] - average;
            varian += selisih * selisih;
        }

        return sqrt(varian / (angkaArrSize - 1));
    }
}