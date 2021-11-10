#include <stdio.h>

int Max() {

  int numbers[9];
  int max = 0;
  int maxIndex = 0;
  for(int i=0; i<9; i++)
  {
    scanf("%d", &numbers[i]);
  }

  for(int i=0; i<9; i++)
  { 
    if(max < numbers[i])
    {
      max = numbers[i];
      maxIndex = i+1;
    }
  }

  printf("%d\n", max);
  printf("%d", maxIndex);
  return 0;
}