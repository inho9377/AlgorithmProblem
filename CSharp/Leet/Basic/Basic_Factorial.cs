public class Factorial{
  public int FactorialByLoop(int a)
  {
    if(a <= 1)
    {
      return 1;
    }

    int answer = 1;
    for(int i=a; i>=0; i--)
    {
      answer *= i;
    }

    return answer;
  }

  public int FactorialByRe(int a)
  {
    if(a <= 1)
    {
      return 1;
    }
    return a * FactorialByRe(a-1);
  }
}