#include <stdio.h>
#include <stack>
#include <string>
#include <iostream>
using namespace std;

bool IsBracket(string str)
{
  stack<char> st;
  bool isBracket = false;

  //string과 char의 관계 관련 검색 참조 (C++기본)
  for (char c : str)
  {
    if(c == '(')
    {
      st.push('(');
    }
    else if(c == ')')
    {
      //괄호가 맞지 않은 상황
      //넘어가긴 했는데.. 다른 예외상황이 더 없는지 확신이 안 선다.
      if(st.empty())
      {
        return false;
      }
      else
      {
        st.pop();
      }
    }
  }

  return st.empty();
}

int Bracket() 
{
  int count;
  scanf("%d", &count);

  for(int i=0; i<count; i++)
  {
    string bracket;
    cin >> bracket;
    bool isBracket = IsBracket(bracket);
    if(isBracket)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }

  return 0;
}