#include <stdio.h>


int GetFactorial(int number)
{
  if(number>1)
  {
    return number * GetFactorial(number-1);
  }
  else 
  {
    return 1;  
  }
}

int Factorial() {

  int number;
  scanf("%d", &number);

  int factorial = GetFactorial(number);
  printf("%d", factorial);

  return 0;
}
