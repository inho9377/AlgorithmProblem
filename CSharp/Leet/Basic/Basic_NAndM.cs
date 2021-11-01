using System;

public class NAndM
{
  // public static void Main(string[] args){
  //   int a=1;
  // }
  //N중에 M개 중복없이 모든 수열
  //index번째의 수를 결정
  void One(bool[] check, int[] anwer, int[] target, int index, int m)
  {
    if(index == m)
    {
      //수열 출력
      return;
    }

    for(int i=1; i<= target.Length; i++)
    {
      if(check[i])
      {
        continue;
      }
      check[i] = true;
      anwer[index] = target[i];
      One(check, anwer, target, index+1, m);
      check[i] = false;
    }
  }

  //중복없이 M개 고른 수열 (오름차순)
  void Two(bool[] check, int[] anwer, int[] target, int index, int m, int start)
  {
    if(index == m)
    {
      //수열 출력
      return;
    }

    for(int i=start; i<= target.Length; i++)
    {
      if(check[i])
      {
        continue;
      }
      check[i] = true;
      anwer[index] = target[i];
      Two(check, anwer, target, index+1, m, i+1);
      check[i] = false;
    }
  }

    //각각의 자리에 선택
    void Two_Another(int index, int selected, int n, int m, int[] answer)
    {
      if(selected == m)
      {
        //수열 출력
        return;
      }

      if(index > n)
      {
        return;
      }
      //선택한경우
      answer[selected] = index;
      Two_Another(index+1, selected+1, n, m, answer);
      //선택안한경우
      answer[selected] = 0;
      Two_Another(index+1, selected, n, m, answer);
    }


    //N개중 M개 고른 수열 (중복 가능)
  void Three(bool[] check, int[] anwer, int[] target, int index, int m)
  {
    if(index == m)
    {
      //수열 출력
      return;
    }

    for(int i=1; i<= target.Length; i++)
    {
      // if(check[i])
      // {
      //   continue;
      // }
      check[i] = true;
      anwer[index] = target[i];
      Three(check, anwer, target, index+1, m);
      check[i] = false;
    }
  }

  
  //N개중 M개 고른 수열 (중복가능, 비 내림차순)
  void Four(bool[] check, int[] anwer, int[] target, int index, int m, int start)
  {
    if(index == m)
    {
      //수열 출력
      return;
    }

    for(int i=start; i<= target.Length; i++)
    {
      // if(check[i])
      // {
      //   continue;
      // }
      check[i] = true;
      anwer[index] = target[i];
      Four(check, anwer, target, index+1, m, i); //Not i
      check[i] = false;
    }
  }

  //N행 M열 격자판에서 K개의 칸 선택. 칸이 인접하면 안됨.
  void NMAndK(int[][]map, int count, int sum, int n, int m, int k, bool[][]check, ref int ans)
  {
    int[] dx = new int[]{0,0,1,-1};
    int[] dy = new int[]{1,-1,0,0};

    if(count == k)
    {
      if(ans < sum)
      ans = sum;
      return;
    }

    for(int x=0; x<=n; x++)
    {
      for(int y=0; y<=m; y++)
      {
        if(check[x][y])
        continue;

        bool ok = true;
        for(int i=0; i<4; i++){
          int nx = x+dx[i];
          int ny = y+dy[i];
          if(0<= nx && nx < n && 0<=ny && ny<m){
            if(check[nx][ny]){
              ok = false;
            }
          }
          /// Plus
          else{
            ok = false;
          }
          ///
        }

        if(ok){
          check[x][y] = true;
          NMAndK(map, count+1, sum+map[x][y], n, m, k, check, ref ans);
          check[x][y] = false;
        }
      }

    }

  }

  //중복제거 NM2 응용, start-N
  void NMAndK2(int[][]map, int count, int sum, int n, int m, int k, bool[][]check, ref int ans,
      int px, int py) //이전 선택칸의 행, 렬번호
  {
    int[] dx = new int[]{0,0,1,-1};
    int[] dy = new int[]{1,-1,0,0};

    if(count == k)
    {
      if(ans < sum)
      ans = sum;
      return;
    }

    for(int x=px; x<=n; x++)
    {
      for(int y=x==px?py:0; y<=m; y++)
      {
        if(check[x][y])
        continue;

        bool ok = true;
        for(int i=0; i<4; i++){
          int nx = x+dx[i];
          int ny = y+dy[i];
          if(0<= nx && nx < n && 0<=ny && ny<m){
            if(check[nx][ny]){
              ok = false;
            }
          }
          /// Plus
          else{
            ok = false;
          }
          ///
        }

        if(ok){
          check[x][y] = true;
          NMAndK2(map, count+1, sum+map[x][y], n, m, k, check, ref ans, x, y);
          check[x][y] = false;
        }
      }

    }

  }
}