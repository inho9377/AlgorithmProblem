
// A. 모든 순열 (10974)
// void dfs(int cur) {
//     if (cur == N) {
//         for (int i = 0; i < N; i++) {
//             printf("%d ", step[i]);
//         }
//         printf("\n");
//         return;
//     } // leaf

//     for (int nxt = 1; nxt <= N; nxt++) {
//         if (!used[nxt]) {
//             step[cur] = nxt;
//             used[nxt] = 1;
//             dfs(cur + 1);
//             used[nxt] = 0;
//         }
//     } // -> nxt_node
// }


// for (int i = 0; i < N; i++) {
//     arr[i] = i + 1;
// }
// do {
//     for (int i = 0; i < N; i++) {
//         printf("%d ", arr[i]);
//     } 
//     puts("");
// } while (next_permutation(arr, arr + N));



// B. 부분수열의 합(1182)
// void dfs(int cur, int cnt, int sum) {
//     if (cur == N) {
//         if (cnt != 0 && sum == S) {
//             answer++;
//         //   return;
//         }
//         return;
//     } // leaf

//     //nxt 의 값을 사용하는 경우
//     dfs(cur + 1, cnt + 1, sum + list[cur]);

//     //nxt의 값을 사용하지 않는 경우
//     dfs(cur + 1, cnt, sum);
// }

// for (int mask = 1; mask < (1 << N); mask++) {
//     int sum = 0;
//     for (int cur = 0; cur < N; cur++) {
//         if ((mask & (1 << cur)) != 0) {
//             sum += list[cur];
//         }
//     }
//     if (sum == S) answer++;
// }

// C. 로또(6603)
// void dfs(int cur, int cnt) {
//     if (cnt == 6) {
//         for (int i = 0; i < cnt; i++) {
//             printf("%d ", step[i]);
//         }
//         printf("\n");
//         return;
//     } // leaf
//  
//     for (int nxt = cur; nxt < K; nxt++) {
//         step[cnt] = arr[nxt];
//         dfs(nxt + 1, cnt + 1);
//     }
// }

// int perm[15] = {0};
// for (int i = 0; i < 6; i++)
//     perm[i] = 1;

// do {
//     for (int i = 0; i < K; i++) {
//         if (perm[i] == 1) {
//             printf("%d ", arr[i]);
//         }
//     }
//     puts("");
// } while (prev_permutation(perm, perm + K));
// puts("");


// D. 순열사이클 (10451)
// void dfs(int cur) {
//   if (visit[cur]) {
//     answer++;
//     return;
//   }

//   visit[cur] = true;

//   dfs(arr[cur]);
// }

//   for (int i = 1; i <= N; i++ ) {
//     visit[i] = false;
//   }
//   for (int i = 1; i < N + 1; i++) {
//     if (visit[i]) {
//       continue;
//     }
//     dfs(i);
//   }



#include <iostream>
#include <algorithm>

using namespace std;

int L;
int C;

char arr[16];

bool check[200];


int main() {
    for (char c : "aeiou") {
        check[c] = true;
    }

    freopen("./input.txt", "r", stdin);
    scanf("%d %d", &L, &C);

    for (int i = 0; i < C; i++) {
      scanf(" %c", &arr[i]);
    }
    sort(arr, arr + C);

    int arrPerm[16] = {0};
    for (int i = 0; i < L; i++) {
      arrPerm[i] = 1;
    }

    do {
      int mNumber = 0;
      int cNumber = 0;

      string ret;
      for (int i = 0; i < C; i++) {
          if (arrPerm[i]) {
            ret += arr[i];
          }
      }

    //   for (int i = 0; i < L; i++) {
    //     if (ret[i] == 'a' ||
    //         ret[i] == 'i' ||
    //         ret[i] == 'o' ||
    //         ret[i] == 'e' ||
    //         ret[i] == 'u') {
    //           mNumber++;
    //         }
    //       else {
    //         cNumber++;
    //       }
    //   }

      for (char c : ret) {
          if (check[c]) {
              mNumber++;
          }
          else {
              cNumber++;
          }
      }

      if (mNumber >= 1 && cNumber >= 2) {
        printf("%s\n", ret.c_str());
      }
    } while (prev_permutation(arrPerm, arrPerm + C));

}