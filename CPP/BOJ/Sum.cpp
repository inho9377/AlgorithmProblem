#include <stdio.h>

int Sum() {
    int number;
    scanf("%d", &number);

    int sum = number*(number+1)/2;
    printf("%d", sum);

    return 0;
} 