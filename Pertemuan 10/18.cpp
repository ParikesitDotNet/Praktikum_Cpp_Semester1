#include "../global/header.h"

void copyString(char *src, char *dest)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
}

int main()
{
    char src[] = "Hello";
    char dest[5];
    copyString(src, dest);
    cout << "Hasil copy string: " << dest << endl;
}