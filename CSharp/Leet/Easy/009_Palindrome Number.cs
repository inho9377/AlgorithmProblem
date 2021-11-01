using System.Collections.Generic;
using System;

public class _009_PalindromeNumber
{
    public bool IsPalindrome(int x) 
    {
        if(x<0 || (x%10==0 && x!=0))
        {
          return false;
        }

        int reverseNumber = 0;
        while(x > reverseNumber)
        {
          reverseNumber = reverseNumber *10 + x%10;
          x/=10;
        }

        return x==reverseNumber || x == reverseNumber/10;
    }
public bool IsPalindrome_(int x) {
        if(x < 0)
        {
          return false;
        }

      int length = NumLength(x);
      for(int i=0; i<length/2; i++)
      {
        int reverseIndex = length - i - 1;
        int num = GetGakNumberDigit(i, x);
        int reverseNum = GetGakNumberDigit(reverseIndex, x);
        if(num != reverseNum)
        {
          return false;
        }
      }

      return true;
    }

    int GetGakNumberDigit(int digit, int x)
    {
      int tens = (int)Math.Pow(10, digit+1);
      int tens2 = (int)Math.Pow(10, digit);
      return x % tens / tens2;
    }
    int NumLength(int number)
    { 
      if (number == 0)
      {
        return 1;
      }
      return ((int)Math.Log10(number > 0 ? number : -number)) + 1;
    }
}