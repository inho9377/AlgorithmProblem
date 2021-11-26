#include <stdio.h>
#include <algorithm>
int AllMeasure() {

  int count;
  scanf("%d", &count);
  int numbers[count];
  for(int i=0; i<count; i++)
  {
    scanf("%d ", &numbers[i]);
  }

  int N;

  std::sort(numbers, numbers+count);
  if(count == 1)
  {
    N = numbers[0]*numbers[0];
  }
  else
  {
    N = numbers[0] * numbers[count-1];
  }

  printf("%d", N);
  return 0;
}