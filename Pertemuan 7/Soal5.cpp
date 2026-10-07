#include "../global/header.h"

int findLargestNum(const vector<int> inputArr)
{
    return *min_element(inputArr.begin(), inputArr.end());
}

int main()
{
    vector<int> arr = {8, 3, 10, 2, 6};
    cout << findLargestNum(arr);
    return 0;
}
