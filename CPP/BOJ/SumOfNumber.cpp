#include <stdio.h>
#include <string>
using namespace std;

int SumOfNumber()
{
    int count;
    scanf("%d", &count);

    char str[count];
    scanf("%s", &str);

    int sum=0;
    for(int i=0; i<count; i++)
    {
      //아스키코드 숫자 변환 검색 활용
      sum += (int)str[i] - '0';

    }

    printf("%d", sum);
    return 0;
}