#include <stdio.h>

int Ascii()
{
    int year;
    scanf("%d", &year);

    char str;
    scanf("%c", &str);

    int ascii = (int)str;
    printf("%d", ascii);
    return 0;
}