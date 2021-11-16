#include <stdio.h>
#include <math.h>

bool isPrime(int number)
{
  if(number == 1)
  {
    return false;
  }

  //sqrt(number)가 안되는 이유 검색필요..
  for(int i=2; i<number; i++){
    if(number % i == 0)
    {
      return false;
    }
  }

  return true;
}

int FindPrimeNumber() {
  int count;

  scanf("%d", &count);
  int numbers[count];
  for(int i=0; i<count; i++)
  {
    scanf("%d", &numbers[i]);
  }

  int primeCount=0;
  for(int i=0; i<count; i++)
  {
    if(isPrime(numbers[i])){
      primeCount++;
    }

  }

  printf("%d", primeCount);
  return 0;
}