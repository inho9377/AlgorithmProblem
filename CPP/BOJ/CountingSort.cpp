#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


void Swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int Partition(int numbers[], int l, int r)
{
    int pivot = numbers[l]; 
    int low = l + 1;
    int high = r;
 
    while (low <= high) 
    {
        while (low <= r && pivot >= numbers[low]) 
        {
            low++; 
        }
        while (high >= (l+1)  && pivot <= numbers[high])  
        {
            high--; 
        }
        if (low <= high)
        {
            Swap(numbers, low, high); 
        }
    }
    Swap(numbers, l, high); 
    return high; 
 
}
void QuickSort(int numbers[], int l, int r)
{
  if(l <= r)
  {
    int pivot = Partition(numbers, l, r); // 둘로 나누어서
    QuickSort(numbers, l, pivot - 1); // 왼쪽 영역을 정렬한다.
    QuickSort(numbers, pivot + 1, r); // 오른쪽 영역을 정렬한다.
  }
}

//퀵 소트 방식 검색 참조
int CountingSort() {
  int count;
  scanf("%d", &count);

  int numbers[count];

  for(int i=0; i<count; i++)
  {
    scanf("%d", &numbers[i]);
  }
  
  QuickSort(numbers, 0, count-1);

  for(int i=0; i<count; i++)
  {
    printf("%d\n", numbers[i]);
  }

  return 0;

}
