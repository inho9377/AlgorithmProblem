#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int count;
  scanf("%d", &count);

  int numbers[10010] = {};
  for(int i=0; i<count; i++)
  {
    int number;
    scanf("%d", &number);
    numbers[number]++;
  }

  for(int i=1; i<10001; i++)
  {
    for(int t=0; t<numbers[i]; t++)
    {
      printf("%d\n", i);
    }
  }

  return 0;

}