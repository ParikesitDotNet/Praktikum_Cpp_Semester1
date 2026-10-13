#include "../global/header.h"

int countEven(const vector<int> numArr)
{
    int evenCount = 0;
    int n = size(numArr);

    for (int i = 0; i < n; i++)
    {
        if (numArr[i] % 2 == 0)
            evenCount++;
    }

    return evenCount;
}

int main()
{
    vector<int> lists = {1, 2, 4, 7, 8, 10};
    cout << "Angka genap pada Array adalah: " << countEven(lists);
}
