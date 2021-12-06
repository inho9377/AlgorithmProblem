#include <iostream>
#include <queue>

using namespace std;


int MaxHeap()
{
ios_base::sync_with_stdio(0);cin.tie(0); 
  int count;
  cin >> count;
  //우선순위 큐 검색
  priority_queue<int> q;

  for(int i=0; i<count; i++)
  {
    int num;
    cin >> num;
    if(num==0)
    {
      if(q.empty())
      {
        printf("0\n");
      }
      else
      {
        printf("%d\n", q.top());
        q.pop();
      }
    }
    else
    {
      q.push(num);
    }
  }
  return 0;
}