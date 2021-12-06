#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str[101];
    scanf("%s", &str);

    int count[26];
    //memset은 반복되는 패턴, -1, 0초기화에서만 사용가능하다. <- 검색해봐야겟다.
    //char (byte)단위로 초기화
    memset(count, -1, sizeof(int)*26);

    //strlen 함수 검색 참조
    int size = strlen(str);

    for(int i=0; i<size; i++)
    {
      int alphaNumber = (int)str[i] - 'a';
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

//스트림을 비워줌
    printf("\n");

    return 0;
}