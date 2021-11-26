#include <stdio.h>
#include <stack>


using namespace std;

int Zero() 
{
  int count;
  scanf("%d", &count);

  stack<int> st;

  for(int i=0; i<count; i++)
  {
    int number;
    scanf("%d", &number);
    if(number == 0)
    {
      st.pop();
    }
    else
    {
      st.push(number);
    }
  }


  int sum=0;
  while(st.empty() == false)
  {
    sum += st.top();
    st.pop();
  }

  printf("%d", sum);

  return 0;
}