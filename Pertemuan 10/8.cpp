#include "../global/header.h"

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << "Elemen digandakan: ";

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) * 2 << " ";
    }

    cout << endl;
}

/*
dari array arr[5] it di discructure dalam for loop yang menggunakan pointer untuk mentransfer value dari arr[5] ke variabel ptr yang dikalikan 2
*/