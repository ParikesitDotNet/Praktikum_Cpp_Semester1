#include "../global/header.h"

int countPositive(const vector<int> numArr)
{
    int positiveCount = 0;
    int n = size(numArr);

    for (int i = 0; i < n; i++)
    {
        if (numArr[i] > 1)
            positiveCount++;
    }

    return positiveCount;
}

int main()
{
    vector<int> lists = {-3, 5, -1, 7, 2, -8};
    cout << "Angka positif pada array sebanyak:" << countPositive(lists);
}
