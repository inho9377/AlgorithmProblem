#include <stdio.h>

int PlusCycle() {
    int originNumber;
    scanf("%d", &originNumber);
    int number = originNumber;
    int cycleCount=0;

    do
    {
      int first = number / 10;
      int second = number % 10;

      int first_ = (first+second) % 10;
      number = first_ + second*10;

      cycleCount++;
    }
    while(originNumber != number);

    printf("%d", cycleCount);
    return 0;
}