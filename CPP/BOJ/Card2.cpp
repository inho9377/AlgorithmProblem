#include <stdio.h>
#include <queue>
#include <string>

using namespace std;


//처음에 큐로 집어넣는 방식 검색 참조
int Card_2() 
{
  int number;
  scanf("%d", &number);

  queue<int> q;
  for(int i=1; i<number+1; i++)
  {
    q.push(i);
  }

  while(q.size() != 1)
  {
    q.pop();
    int top = q.front();
    q.push(top);
    q.pop();
  }

  printf("%d", q.front());

  return 0;
}