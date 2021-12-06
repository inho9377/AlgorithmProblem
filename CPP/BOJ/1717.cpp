#include <cstdio>
#include <vector>

using namespace std;
struct Query
{
  int a;
  int b;
  int c;
};


int getRoot(vector<int>& unions, int find)
{
  if(unions[find] == find)
  {
    return find;
  }
  else
  {
    int root = getRoot(unions, unions[find]);
    unions[find] = root;
    return root;
  }
}

void unionSet(vector<int>& unions, int a, int b)
{
  a = getRoot(unions, a);
  b = getRoot(unions, b);
  unions[a] = b;
}

vector<bool> containSet(int n, int m, vector<Query> q)
{
  vector<bool> isContain;
  vector<int> unions(n+1);
  for(int i=0; i<n+1; i++)
  {
    unions[i] = i;
  }

  for(const auto qu : q)
  {
    if(qu.a == 0)
    {
      unionSet(unions, qu.b, qu.c);
    }
    else if(qu.a == 1)
    {
      bool ret = getRoot(unions, qu.b) == getRoot(unions, qu.c);
      isContain.push_back(ret);
    }
  }  
  return isContain;
}

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);

  vector<Query> q(m);
  for(int i=0; i<m; i++)
  {
    scanf("%d %d %d", &q[i].a, &q[i].b, &q[i].c);
  }

  vector<bool> ret = containSet(n, m, q);
  
  //const : 임시변수 복사할 필요가 없으니 빠름
  for(const auto a : ret)
  {
    if(a == true)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
}