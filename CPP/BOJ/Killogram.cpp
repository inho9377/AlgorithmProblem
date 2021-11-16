#include <stdio.h>


int Killogram() {
  
  int count;

  scanf("%d", &count);

  int weight[count];
  int height[count];
  for(int i=0; i<count; i++)
  {
    scanf("%d %d", &weight[i], &height[i]);
  }

  int rating = 1;
  for(int i=0; i<count; i++)
  {
    for(int j=0; j<count; j++)
    {
      if(weight[i] < weight[j] && height[i] < height[j])
      {
        rating++;
      }
    }
    printf("%d ", rating);
    rating = 1;
  }
  return 0;
}