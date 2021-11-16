#include <stdio.h>

int BreakEvenPoint() {
  int fixedCost, changeCost, price;

  scanf("%d %d %d", &fixedCost, &changeCost, &price);

  int min = -1;
  if(price > changeCost)
  {
    min = fixedCost / (price - changeCost);
  }

  printf("%d", min);

  return 0;
}