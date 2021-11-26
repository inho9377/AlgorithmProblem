#include <stdio.h>
#include <algorithm>

//유클리드 호제법 검색 참조
int GetGCD(int a, int b)
{
  int mod = b;
  int result = a % mod;
  while(result != 0)
  {
    a = mod;
    mod = result;
    result = a % mod;
  }

  return b;
}

//최대공약수 * 최대공배수 = 두 수의 곱 검색 참조
int GetLCM(int a, int b)
{
  int gcd = GetGCD(a, b);
  if(gcd != 0)
    return (a * b) / gcd;
  else
    return 0;
}

int MinMaxMultiple() {

  int a; int b;
  scanf("%d %d", &a, &b);

  int N;


  printf("%d\n%d", GetGCD(a,b), GetLCM(a,b));
  return 0;
}