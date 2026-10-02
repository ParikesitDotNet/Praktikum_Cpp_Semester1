#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

namespace Discounts
{
    float giveDiscount(float persen, float harga)
    {
        float theDiscountedHarga = harga - (harga * (persen / 100.0));
        return theDiscountedHarga;
    }
}