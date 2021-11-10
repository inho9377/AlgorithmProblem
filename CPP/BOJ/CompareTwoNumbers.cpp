#include <stdio.h>

int CompareTwoNumber()
{
    int a; int b;
    scanf("%d %d", &a, &b);

    if(a > b)
    {
      printf(">");
    }
    else if (a < b)
    {
      printf("<");
    }
    else
    {
      printf("==");
    }
}