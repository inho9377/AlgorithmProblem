#include <stdio.h>
#include <algorithm>
using namespace std;

int ATM() 
{
  int count;
  scanf("%d", &count);
  int time[count];
  for(int i=0; i<count; i++)
  {
    scanf("%d", &time[i]);
  }

  int waitTime=0;
  sort(time, time+count);
  for(int i=0; i<count; i++)
  {
    for(int t=0; t<=i; t++)
      waitTime += time[t];
  }

  printf("%d", waitTime);

  return 0;
}