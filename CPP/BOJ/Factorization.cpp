#include <stdio.h>
#include <math.h>


int Factorization() {

  int number;
  scanf("%d", &number);

  int index=2;
  while(number > 1)
  { 
    if(number % index == 0)
    {
      number /= index;
      printf("%d\n", index);
    }
    else
    {
      index++;
    }

  }


  return 0;
}