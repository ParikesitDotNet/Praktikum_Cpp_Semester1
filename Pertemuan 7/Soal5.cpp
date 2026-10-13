#include "../global/header.h"

int findSmallestNum(const vector<int> inputArr)
{
    return *min_element(inputArr.begin(), inputArr.end());
}

int main()
{
    vector<int> arr = {8, 3, 10, 2, 6};
    cout << "Angka terkecil pada Array adalah angka: " << findSmallestNum(arr);
    return 0;
}
