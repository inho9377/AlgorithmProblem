#include <stdio.h>


int arr[9];
bool visited[9] = {false};
void _NandM(int startNumber, int count, int N, int M)
{
  if(count == M)
  {
    for(int i=0; i<M; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
    return;
  }


  for(int i=startNumber; i<N+1; i++)
  {
    if(!visited[i])
    {
      visited[i] = true;
      arr[count] = i;
      _NandM(i+1, count+1, N, M);
      visited[i] = false;
    }
  }
}

int NAndM_2() 
{
  int N;
  int M;
  scanf("%d %d", &N, &M);

  _NandM(1, 0, N, M);

  return 0;

}