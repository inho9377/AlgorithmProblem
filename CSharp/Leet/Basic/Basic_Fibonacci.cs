public class Fibonacci{

  public int FibonacciByRe(int a)
  {
    if(a == 1)
    {
      return 1;
    }
    if(a == 0)
    {
      return 0;
    }

    return FibonacciByRe(a-2) + FibonacciByRe(a-1);
  }

  public int FibonacciByLoop(int a)
  {
    if(a == 1)
    {
      return 1;
    }
    if(a == 0)
    {
      return 0;
    }

    int answer =0;
    int iterA = 0, iterB = 1;

    for(int i=2; i<=a; i++)
    {
      answer = iterA + iterB;
      iterA = iterB;
      iterB = answer;
    }

    return answer;
  }
}