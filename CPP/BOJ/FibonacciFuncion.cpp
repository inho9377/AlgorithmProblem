#include <stdio.h>

int FibonacciFunction() 
{
  int count;
  scanf("%d", &count);
  int number[count];
  for(int i=0; i<count; i++)
  {
    scanf("%d", &number[i]);
  }

  int fiboCount_zero[41];
  fiboCount_zero[0] = 1;
  fiboCount_zero[1] = 0;
  int fiboCount_one[41];
  fiboCount_one[0] = 0;
  fiboCount_one[1] = 1;

  //DP 바텀업 방식 관련 검색 참조
  for(int i=2; i<=40; i++)
  {
    fiboCount_zero[i] = fiboCount_zero[i-1] + fiboCount_zero[i-2];
    fiboCount_one[i] = fiboCount_one[i-1] + fiboCount_one[i-2];
  }



  for(int i=0; i<count; i++)
  {
    printf("%d %d\n", fiboCount_zero[number[i]], fiboCount_one[number[i]]);
  }

  return 0;

}