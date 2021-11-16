#include <stdio.h>


int GetFibonacci(int number)
{
  if(number == 0)
  {
    return 0;
  }
  else if (number == 1)
  {
    return 1;
  }
  else
  {
    return GetFibonacci(number-2) + GetFibonacci(number-1);
  }
}

int Fibonacci() {

  int number;
  scanf("%d", &number);

  int fibo = GetFibonacci(number);
  printf("%d", fibo);

  return 0;
}
