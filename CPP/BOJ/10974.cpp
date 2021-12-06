#include <cstdio>
#include <algorithm>
#include <iostream>
#include <memory.h>

using namespace std;
int N;
int steps[10];
bool used[10];


void dfs(int cur) {
  if (cur == N) {
    for(int i = 0; i < N; i++) {
      printf("%d ", steps[i]);
    }
    printf("\n");

    return;
  }

  for (int next = 1; next <= N; next++) {
    if(used[next] == false) {
      steps[cur] = next;
      used[next] = true;
      dfs(cur + 1);
      used[next] = false;
    }
  }
}


int main(){
  scanf("%d", &N);
  memset(used, 10, false);
  dfs(0);
}