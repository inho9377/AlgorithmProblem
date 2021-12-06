#include <iostream>

using namespace std;

int N;
int S;

int list[21];
int answer;

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


void dfs(int cur, int cnt, int sum) {
    if (cur == N) {
        if (cnt != 0 && sum == S) {
            answer++;
        //   return;
        }
        return;
    } // leaf

    //nxt 의 값을 사용하는 경우
    dfs(cur + 1, cnt + 1, sum + list[cur]);

    //nxt의 값을 사용하지 않는 경우
    dfs(cur + 1, cnt, sum);
}


    // for (int mask = 1; mask < (1 << N); mask++) {
    //     int sum = 0;
    //     for (int cur = 0; cur < N; cur++) {
    //         if ((mask & (1 << cur)) != 0) {
    //             sum += list[cur];
    //         }
    //     }
    //     if (sum == S) answer++;
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

// int main() {
//     freopen("./input.txt", "r", stdin);

//     scanf("%d %d", &N, &S);
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &list[i]);
//     }
//     dfs(0, 0, 0);
//     printf("%d", answer);
// }


// #include <iostream>
// #include <algorithm>

// using namespace std;

// int N;
// int S;

// int arr[15];
// int K;
// int step[15];

// void dfs(int cur, int cnt) {
//     if (cnt == 6) {
//         for (int i = 0; i < 6; i++) {
//             printf("%d ", step[i]);
//         }
//         printf("\n");
//         return;
//     }
  
//     if (cur == K) {
//         return;
//     }

//     for (int nxt = cur; nxt < K; nxt++) {
//         step[cnt] = arr[nxt];
//         dfs(nxt + 1, cnt+1);
//     }
// }

// int main() {
//     freopen("./input.txt", "r", stdin);

//     while (1) {
//         scanf("%d", &K);
//         if (!K) break;
//         for (int i = 0; i < K; i++) {
//           scanf("%d", &arr[i]);
//         }   
//         dfs(0, 0);
//         puts("");
//     }

// }

//step은 어떤 index랑만 엮인다는걸 정해놓고 접근
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
