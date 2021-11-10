#include <stdio.h>

int APlusBMinus3() {
    int count;
    scanf("%d", &count);

    for(int i=0; i<count; i++)
    {
        int a; int b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
} 