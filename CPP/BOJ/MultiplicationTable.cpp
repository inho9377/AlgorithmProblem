#include <stdio.h>

int MultiplicationTable()
{
    int number;
    scanf("%d", &number);

    for(int i=1; i<10; i++)
    {
      printf("%d * %d = %d", number, i, number*i);
    }


    return 0;
}