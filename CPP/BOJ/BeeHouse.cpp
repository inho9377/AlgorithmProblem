#include <stdio.h>

//겹치는 갯수를 활용하는 풀이방법 검색 참조
int BeeHouse() {
  long long number;

  scanf("%d", &number);

  int count = 1;
  long long range = 1;
  
  while(true)
  {
    if(range >= number)
    {
      break;
    }
    long long temp = 6 * (count++);
    range += temp;
  }

  printf("%d", count);

  return 0;
}