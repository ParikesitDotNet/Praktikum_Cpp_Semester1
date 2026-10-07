#include "../global/header.h"

int findLargestNum(const vector<int> inputArr)
{
    return *max_element(inputArr.begin(), inputArr.end());
}

int main()
{
    vector<int> arr = {5, 2, 9, 3, 7};
    cout << "Angka Terbesar:" << findLargestNum(arr);
    return 0;
}
