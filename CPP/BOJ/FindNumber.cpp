#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool ContainNumber(int* list, int find, int count)
{
  int start=0;
  int end = count-1;
  int mid=0;
  while(end >= start)
  {
    mid = (start+end)/2;
    if(list[mid] == find)
    {
      return true;
    }
    else if (list[mid] > find)
    {
      end = mid-1;
    }
    else
    {
      start = mid+1;
    }
  }

  return false;
}

int FindNumber() {

//시간초과 검색
ios_base::sync_with_stdio(0);cin.tie(0); 
  int count;
  cin >> count;
  int list[count];

	for (int i=0; i<count; i++)
  {
    cin >> list[i];
  }

  sort(list, list+count);

  int MCount;
  cin >> MCount;
  int MList[MCount];
  for(int i=0; i<MCount; i++)
  {
    cin >> MList[i];
  }
  
  for(int i=0; i<MCount; i++)
  {
    if(ContainNumber(list, MList[i], count))
    {
      printf("1\n");
    }
    else
    {
      printf("0\n");
    }
  }

  return 0;
}