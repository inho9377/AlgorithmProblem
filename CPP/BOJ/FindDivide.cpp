#include <stdio.h>

//풀이방법 검색 참조
int FindDivide() {
  int number;

  scanf("%d", &number);

  int index = 1;
  while(number > index)
  {
    number -= index;
    index++;
  }


  if(index % 2 == 1)
  {
    printf("%d/%d", index+1-number, number);
  }
  else
  {
    printf("%d/%d", number, index+1-number);
  }



  return 0;
}