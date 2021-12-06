#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int map[2200][2200];

int count_Zero=0;
int count_One=0;
int count_MinusOne=0;

void Count(int x, int y)
{
  if(map[x][y] == -1)
  {
    count_MinusOne++;
  }
  else if(map[x][y] == 0)
  {
    count_Zero++;
  }
  else if(map[x][y] == 1)
  {
    count_One++;
  }
}

void Number(int start_X, int start_Y, int size)
{
  if(size == 1)
  {
    Count(start_X, start_Y);
    return;
  }

  bool allOne = true;
  bool allZero = true;
  bool allMinus = true;

  for(int i=start_X; i<start_X+size; i++)
  {
    for(int j=start_Y; j<start_Y+size; j++)
    {
      if(map[i][j] == 1)
      {
        allZero = false;
        allMinus = false;
      }
      else if(map[i][j] == 0)
      {
        allOne = false;
        allMinus = false;
      }
      else if(map[i][j] == -1)
      {
        allZero = false;
        allOne = false;
      }
    }
  }


  if(allOne)
  {
    count_One++;
    return;
  }
  if(allZero)
  {
    count_Zero++;
    return;
  }
  if(allMinus)
  {
    count_MinusOne++;
    return;
  }

  Number(start_X, start_Y, size / 3);
  Number(start_X + size/3, start_Y, size / 3);
  Number(start_X + size/3 * 2, start_Y, size / 3);
  Number(start_X, start_Y + size/3, size / 3);
  Number(start_X, start_Y + size/3 * 2, size / 3);
  Number(start_X + size/3, start_Y + size/3, size / 3);
  Number(start_X + size/3, start_Y + size/3*2, size / 3);
  Number(start_X + size/3 * 2, start_Y + size/3, size / 3);
  Number(start_X + size/3 * 2, start_Y + size/3*2, size / 3);
}

int PaperCount() {

  int count;
  cin >> count;

	for (int i = 0; i < count; i++)
  {
		for (int j = 0; j < count; j++)
    {
			cin >> map[i][j];
    }
  }
  Number(0,0, count);

  printf("%d\n%d\n%d", count_MinusOne, count_Zero, count_One);
  return 0;
}