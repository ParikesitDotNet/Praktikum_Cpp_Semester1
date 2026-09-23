#include "../global/header.h"

void recursion()
{
    cout << "Halo." << endl;
    recursion();
}

int main()
{
    recursion();
    return 0;
}