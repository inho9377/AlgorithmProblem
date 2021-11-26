#include <stdio.h>
#include <string>

using namespace std;

int map[70][70];

string answer;

void Number(int start_X, int start_Y, int size)
{
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
    for (int t=0; t<count; t++)
    {
      scanf("%d", &map[i][t]);
    }
  }

  printf("(");
  Number(0,0, count-1);
  printf(")");
  return 0;
}