#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

//내부 소트 사용 방식 검색 참조
int NumberSort_In() {
  int count;
  scanf("%d", &count);

  vector<int> numbers;

  int number;
  for(int i=0; i<count; i++)
  {
    scanf("%d", &number);
    numbers.push_back(number);
  }

  sort(numbers.begin(), numbers.end());

  for(int i=0; i<count; i++)
  {
    printf("%d\n", numbers[i]);
  }

  return 0;

}