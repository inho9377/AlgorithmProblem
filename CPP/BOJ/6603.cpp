#include <cstdio>
#include <algorithm>
#include <iostream>
#include <memory.h>

using namespace std;
int N;
int S;
int arr[21];


int main(){
  scanf("%d %d", &N, &S);
  for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  int answer = 0;
  for (int mask = 1; mask < (1 << N); mask++) {
    int sum = 0;
    for (int i = 0; i< N; i++) {
      if ((mask & (1 << i)) != 0) {
        sum += arr[i];
      }
    }
    if (sum == S) {
      answer++;
    }
  }

  printf("%d", answer);
  return 0;
}