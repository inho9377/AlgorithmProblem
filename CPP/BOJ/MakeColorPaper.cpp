#include <stdio.h>

int map[130][130];

int whiteCount=0;
int blueCount=0;

void Color(int start_X, int start_Y, int size)
{
  bool allWhite = true;
  bool allBlue = true;

  for(int i=start_X; i<start_X+size; i++)
  {
    for(int j=start_Y; j<start_Y+size; j++)
    {
      if(map[i][j] == 1)
      {
        allWhite = false;
      }
      else
      {
        allBlue = false;
      }

      if(allWhite == false && allBlue == false)
      {
        break;
      }
    }
  }


  //종료조건 찾지못해 검색참조..
  if(allWhite)
  {
    whiteCount++;
    return;
  }
  if(allBlue)
  {
    blueCount++;
    return;
  }

  Color(start_X, start_Y, size / 2);
  Color(start_X, start_Y + size/2, size / 2);
  Color(start_X + size/2, start_Y, size / 2);
  Color(start_X + size/2, start_Y + size/2, size / 2);
  



}

int MakeColorPaper() {

  int count;

  scanf("%d", &count);
  for(int i=0; i<count; i++)
  {
    for (int t=0; t<count; t++)
    {
      scanf("%d", &map[i][t]);
    }
  }

  Color(0,0, count);

  printf("%d\n%d", whiteCount, blueCount);


  return 0;
}