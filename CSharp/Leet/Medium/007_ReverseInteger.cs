using System.Collections.Generic;


public class _007_ReverseInteger
{
    public int Problem_Another(int x)
    {
        int rev=0;
        while(x != 0)
        {
            int pop = x%10;
            x/=10;
            if((rev>int.MaxValue/10) || (rev==(int.MaxValue / 10) && pop > 7)) return 0;
            if((rev<int.MinValue/10) || (rev==(int.MinValue / 10) && pop<-8)) return 0;

            rev = rev*10 + pop;
        }

        return rev;
    }

    public int Problem(int x) 
    {
        bool minus = x<0;
        if(minus)
        {
            x *= -1;
        }
        string str = x.ToString();
        string reverseStr = string.Empty;
        for(int i=str.Length-1; i>=0; i--)
        {
            reverseStr = string.Format("{0}{1}", reverseStr, str[i]);
        }
        int result=0;
        if(int.TryParse(reverseStr, out result) == false)
        {
            return 0;
        }

        if(minus)
        {
            result *= -1;
        }

        return result;
    }

}