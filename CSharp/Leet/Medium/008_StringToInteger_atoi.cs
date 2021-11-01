using System.Collections.Generic;


public class _008_StringToInteger_atoi
{
    bool IsNumberCharacter(char a)
    {
        if(a == '0' ||
        a=='1' ||
        a=='2' ||
        a=='3' ||
        a=='4' ||
        a=='5' ||
        a=='6' ||
        a=='7' ||
        a=='8' ||
        a=='9'
        )
        return true;

        return false;

    }
    public int Problem(string s)
    {
        bool minus = false;
        bool checkPlusMinus = false;
        string number = string.Empty;
        for(int i=0; i<s.Length; i++)
        {
            if(s[i] == ' ')
            {
                if(string.IsNullOrEmpty(number) == false)
                {
                    break;
                }
                continue;
            }
            else if (s[i] == '-')
            {
                if(checkPlusMinus || string.IsNullOrEmpty(number) == false)
                {
                    break;
                }
                checkPlusMinus = true;
                minus = true;                
            }
            else if(s[i] == '+')
            {
                if(checkPlusMinus || string.IsNullOrEmpty(number) == false)
                {
                    break;
                }
                checkPlusMinus = true;
                minus = false;
            }
            else if(IsNumberCharacter(s[i]))
            {
                number = string.Format("{0}{1}", number, s[i]);
            }
            else
            {
                break;
            }
        }

        int outNum = 0;
        if(string.IsNullOrEmpty(number))
        {
            return 0;
        }
        else if(int.TryParse(number, out outNum))
        {
            if(minus)
            {
                outNum *= -1;
            }
            return outNum;
        }
        else
        {
            if(minus)
            {
                return int.MinValue;
            }
            else
            {
                return int.MaxValue;
            }
        }
    }

}