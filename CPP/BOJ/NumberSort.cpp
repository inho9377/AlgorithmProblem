#include <stdio.h>

int NumberSort() {
  int count;
  scanf("%d", &count);

  int numbers[count];
  for(int i=0; i<count; i++)
  {
    scanf("%d", &numbers[i]);
  }
  
  for(int i=0; i<count; i++)
  {
    int minIndex = i;

    for(int j=i+1; j<count; j++)
    {
      if(numbers[j] < numbers[minIndex])
      {
        minIndex = j;
      }
    }


    int temp = numbers[i];
    numbers[i] = numbers[minIndex];
    numbers[minIndex] = temp;
  }

  for(int i=0; i<count; i++)
  {
    printf("%d\n", numbers[i]);
  }

  return 0;

}