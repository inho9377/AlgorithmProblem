#include <stdio.h>


int DivideSum() {
  
  int number;

  scanf("%d", &number);

  for(int i=1; i<number; i++)
  {
    int sum = i;
    int part = i;
    while(part)
    {
      sum += part % 10;
      part /= 10;
    }

    if(sum == number)
    {
      printf("%d", i);
      return 0;
    }
  }
  printf("%d", 0);
  return 0;
}