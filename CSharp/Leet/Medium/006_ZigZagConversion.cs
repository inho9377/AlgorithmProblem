using System.Collections.Generic;


public class _006_ZigZag_Conversion
{
    public string Problem(string s, int numRows)
    {
        if(numRows == 1)
        {
            return s;
        }
        if(s.Length == 0)
        {
            return s;
        }
        string[] strs = new string[numRows];
        for(int i=0; i<strs.Length; i++)
        {
            strs[i] = string.Empty;
        }

        int countRows = 0;
        bool goDown = false;
        for(int i=0; i<s.Length; i++)
        {
            if(countRows == 0 || countRows == numRows-1)
            {
                goDown = !goDown;
            }            

            strs[countRows] = string.Format("{0}{1}", strs[countRows], s[i]);
            if(goDown)
            {
                countRows++;
            }
            else
            {
                countRows--;
            }
        }

        string ret = string.Empty;
        for(int i=0; i<strs.Length; i++)
        {
            ret = string.Format("{0}{1}", ret, strs[i]);
        }        

        return ret;
    }

}