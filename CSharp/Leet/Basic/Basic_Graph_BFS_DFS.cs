
using System.Collections.Generic;
using System;
public class Graph
{
  public int[][] A;


  bool[] check;
  public void DFS(int x) //x를 방문
  {
    check[x] = true;
    for(int i=1; i<=A[x].Length; i++)
    {
      if(A[x][i] == 1 && check[i] == false)
      {
        DFS(i);
      }
    }
  }

  public void BFS()
  {
    Queue<int> q = new Queue<int>();
    check[1] = true;
    q.Enqueue(1);
    while(q.Count > 0)
    {
      int x = q.Dequeue();
      for(int i=0; i<A[x].Length; i++)
      {
        int y = A[x][i];
        if(check[y] == false)
        {
          check[y] = true;
          q.Enqueue(y);
        }
      }
    }
  }
}