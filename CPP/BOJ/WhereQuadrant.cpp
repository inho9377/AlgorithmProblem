#include <stdio.h>

int WhereQuadrant()
{
    int scoreX; int scoreY;
    scanf("%d %d", &scoreX, &scoreY);

    if(scoreX > 0 && scoreY>0)
    {
      printf("1");
    }
    else if(scoreX < 0 && scoreY > 0)
    {
      printf("2");
    }
    else if(scoreX < 0 && scoreY < 0)
    {
      printf("3");
    }
    else
    {
      printf("4");
    }
    return 0;
}