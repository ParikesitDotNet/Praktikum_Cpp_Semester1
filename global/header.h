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