#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int map[70][70];


void Number(int start_X, int start_Y, int size)
{
  //종료조건 검색 참조. 이 식이 성립되는 정확한 이유는 모르겠다.
  if(size == 1)
  {
    printf("%d", map[start_X][start_Y]);
    return;
  }
  bool allOne = true;
  bool allZero = true;

  for(int i=start_X; i<start_X+size; i++)
  {
    for(int j=start_Y; j<start_Y+size; j++)
    {
      if(map[i][j] == 1)
      {
        allOne = false;
      }
      else
      {
        allZero = false;
      }
    }
  }


  //string에 담지 않고 바로 출력해버리는 방법 검색 참조
  if(allOne)
  {
    printf("1");
    return;
  }
  if(allZero)
  {
    printf("0");
    return;
  }

  printf("(");
  Number(start_X, start_Y, size / 2);
  Number(start_X, start_Y + size/2, size / 2);
  Number(start_X + size/2, start_Y, size / 2);
  Number(start_X + size/2, start_Y + size/2, size / 2);
  printf(")");
  
}

int QuadTree() {

  int count;

  scanf("%d", &count);
  for(int i=0; i<count; i++)
  {
    //입력 방법 검색 참조
    string str;
    cin >> str;
    for (int t=0; t<str.length(); t++)
    {
      map[i][t] = str[t] - '0';
    }
  }

  Number(0,0, count);
  return 0;
}