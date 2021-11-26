#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

//그리디로 풀수 있다는 감이 오지 않는다.
int DivideMeetingRoom() 
{
  int roomCount;
  scanf("%d", &roomCount);


//벡터, sort, pair 관련 검색 참조
  vector<pair<int, int>> roomScedule;
  int begin, end;
  for(int i=0; i<roomCount; i++)
  {
    scanf("%d %d", &begin, &end);
    roomScedule.push_back(make_pair(end, begin));
  }

  sort(roomScedule.begin(), roomScedule.end());

  int number=1;
  int minEndTime = roomScedule[0].first;
  for(int i=1; i<roomCount; i++)
  {
    if(minEndTime <= roomScedule[i].second)
    {
      number++;
      minEndTime = roomScedule[i].first;
    }
  }

  printf("%d", number);

  return 0;
}