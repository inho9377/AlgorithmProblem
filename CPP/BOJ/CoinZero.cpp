#include <stdio.h>

//2번 조건이 직감적으로 그리디를 성립시키기 위한 조건인건 알겠는데..
//왜 그렇게 되는지 정확하게는 이해가 어렵다.
int CoinZero() 
{
  int N; int K;
  scanf("%d %d", &N, &K);
  int coins[N];
  for(int i=0; i<N; i++)
  {
    scanf("%d", &coins[i]);
  }

  int coinCount=0;
  for(int i=N-1; i>=0 ;i--)
  {
    if(coins[i] > K)
    {

    }
    else
    {
      //여러 동전 카운트 하는 법 검색 참조
      coinCount += K / coins[i];
      K %= coins[i];
    }
  }

  

  printf("%d", coinCount);

  return 0;
}