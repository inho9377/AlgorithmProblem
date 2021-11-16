#include <stdio.h>

int Blackjack() {
  
  int cardCount;
  int number;

  scanf("%d %d", &cardCount, &number);

  int cards[cardCount];

  for(int i=0; i<cardCount; i++)
  {
    scanf("%d", &cards[i]);
  }

  int sum = 0;
  for(int i=0; i<cardCount; i++)
  {
    for(int j=i+1; j<cardCount; j++)
    {
      for(int t=j+1; t<cardCount; t++)
      {
        int tempSum = cards[i] + cards[j] + cards[t];
        if(tempSum <= number)
        {
          if((number - tempSum) < (number - sum))
          {
            sum = tempSum;
          }
        }        
      }
    }
  }
  printf("%d", sum);

  return 0;
}