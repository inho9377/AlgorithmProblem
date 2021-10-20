public class _005_LongestPalindromicSubstring
{
    public string Problem(string s) 
    {
      bool[,] dp = new bool[s.Length, s.Length];
      
      string ret = "";
      int max = 0;
      int startIndex=-1;
      for(int i=s.Length-1;i>=0; i--)
      {
        for(int t=i; t<s.Length; t++)
        {
          dp[i,t] = (s[i] == s[t] && (t-i<=2 || dp[i+1,t-1]));
          if(dp[i,t] && t-i >=max)
          {
            max = t-i;
            startIndex = i;
          }
        }
      }
      if(startIndex>=0)
      {
        ret = s.Substring(startIndex, max+1);
      }
      return ret;
    }
}