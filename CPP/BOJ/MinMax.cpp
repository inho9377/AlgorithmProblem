#include <stdio.h>

int MinMax() {
  int count;
  scanf("%d", &count);

  //C++ 배열 사용법 검색 활용
  int numbers[count];
  for(int i=0; i<count; i++)
  {
    scanf("%d", &numbers[i]);
  }

  int min = 1000001, max = -1000001;
  for(int i=0; i<count; i++)
  {
    if(numbers[i] > max)
    {
      max = numbers[i];
    }
    if(numbers[i] < min)
    {
      min = numbers[i];
    }
  }

  printf("%d %d", min, max);
}