#include <stdio.h>

int Measure() {

  while(true)
  {
    int number_1, number_2;
    scanf("%d %d", &number_1, &number_2);
    if(number_1 == 0 && number_2 == 0)
    {
    break;
    }

    if(number_2 % number_1 == 0)
    {
      printf("factor\n");
    }
    else if (number_1 % number_2 == 0)
    {
      printf("multiple\n");
    }
    else
    {
      printf("neither\n");
    }
  }
  return 0;
}