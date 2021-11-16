#include <stdio.h>
#include <math.h>

bool isPrime(int number)
{
  if(number == 1)
  {
    return false;
  }

  for(int i=2; i<number; i++){
    if(number % i == 0)
    {
      return false;
    }
  }

  return true;
}

int FindPrimeNumber2() {

  int M;
  scanf("%d", &M);
  int N;
  scanf("%d", &N);
  int min=0;
  int sum=0;
  
  for(int i=M; i<N+1; i++)
  {
    if(isPrime(i))
    {
      sum+= i;
      if(min == 0)
      {
        min = i;
      }
    }
  }

  if(min > 0)
  {
    printf("%d\n%d", sum, min);
  }
  else
  {
    printf("-1");
  }
  return 0;
}