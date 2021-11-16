#include <stdio.h>
#include <string.h>

using namespace std;

int FindAlphabet()
{
    char str[101];
    scanf("%s", &str);

    int count[26] = {-1};

    //strlen 함수 검색 참조
    int size = strlen(str);

    for(int i=0; i<size; i++)
    {
      int alphaNumber = (int)str[i] - 97;
      if(count[alphaNumber] == -1)
      {
        count[alphaNumber] = i;
      }
    }

    printf("%d", count[0]);

    for(int i=1; i<26; i++)
    {
      printf(" %d", count[i]);
    }

    return 0;
}