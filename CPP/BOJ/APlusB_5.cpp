#include <stdio.h>

int APlusB_5() {
    int a; int b;
    
    //바로 0이 들어오는 케이스
    scanf("%d %d", &a, &b);
    while(a != 0 && b != 0)
    {
      printf("%d\n", a+b);
      scanf("%d %d", &a, &b);
    }

    return 0;
} 

int APlusB_4() {
    int a; int b;
    
    //scanf에서 EOF 판단 부분 검색하여 참조함.
    //while(!(cin >> a >> b).eof()) <- cin사용할경우
    
    while(scanf("%d %d", &a, &b) != -1)
    {
      printf("%d\n", a+b);
    }

    return 0;
} 