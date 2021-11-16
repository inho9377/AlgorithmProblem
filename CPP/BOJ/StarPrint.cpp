#include <stdio.h>

//전반적인 풀이 과정 검색 참조
void StarPrint_(int i, int t, int number)
{
  if(i / number % 3 == 1 && t / number % 3 == 1)
  {
    printf(" ");
  }
  else if(number / 3 == 0)
  {
    printf("*");
  }
  else
  {
    StarPrint_(i, t, number / 3);
  }
}

int StarPrint() {

  int number;
  scanf("%d", &number);
  
  for(int i=0; i<number; i++)
  {
    for(int t=0; t<number; t++)
    {
      StarPrint_(i, t, number);
    }
    printf("\n");
  }

  return 0;
}
