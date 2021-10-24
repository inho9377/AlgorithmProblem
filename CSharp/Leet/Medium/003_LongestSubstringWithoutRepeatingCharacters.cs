using System.Collections.Generic;


public class _003_LongestSubstringWithoutRepeatingCharacters
{
    public int Problem(string s) 
    {
        int left = 0;
        int right = 0;
        int[] chars = new int[128];
        
        int res = 0;

        while(right < s.Length)
        {
            int r= (int)s[right];
            chars[r]++;

            while(chars[r] > 1)
            {
                int l = (int)s[left];
                chars[l]--;
                left++;
            }

            res = System.Math.Max(res, right - left + 1);

            right++;
        }

        return res;
    }

}