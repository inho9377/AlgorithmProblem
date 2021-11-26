#include <stdio.h>

//해당 문제의 결과 배열 크기에 대해 검색 참조
int result[21][21][21];
//DP 업다운 방식에 대해 검색 참조
int w(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }

    if(a > 20 || b > 20 || c > 20)
    {
        return w(20, 20, 20);
    }

    if(result[a][b][c] != 0)
    {
        return result[a][b][c];
    }

    if(a < b && b < c)
    {
        result[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    }
    else
    {
        result[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    }


    return result[a][b][c];
}

int FunnyFunction() 
{
  int a, b, c;
  

  //scanf에 대해 무한 루프 관련 검색 참조
  while(1)
  {
    scanf("%d %d %d", &a, &b, &c);

    if(a ==-1 && b == -1 && c == -1)
    {
      break;
    }

    printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
  
  }


  return 0;

}