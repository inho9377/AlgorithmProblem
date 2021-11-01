using System;
using System.Collections.Generic;
public class Basic_FindRpime_NextPermutation {
    public int solution(string numbers) {
        int answer = 0;
        List<int> nums = new List<int>();
        for(int i=0; i<numbers.Length; i++)
        {
          nums.Add(int.Parse(numbers[i].ToString()));
        }

        HashSet<int> hash = new HashSet<int>();
        // answer = GetPrimeNumber(nums, 1, hash);
        return answer;
    }

    static bool Next_Permutation<T> (List<T> list) where T : IComparable
    {
        Action<int,int> Swap = (int idx1, int idx2) => { T temp = list[idx1]; list[idx1] = list[idx2]; list[idx2] = temp; }; 
        int a= 0, b = 0, p = 0; //p : pivot
        for(int i=list.Count-2 ; i>=0;--i)
            if(list[i].CompareTo(list[i+1])<0)
            {
                a = i;
                p = i + 1;

                for(int j=list.Count-1; j>=0; --j)
                    if(list[a].CompareTo(list[j])<0)
                    {
                        b = j;
                        break;
                    }

                Swap(a, b);

                for(int j=0; j<(list.Count-p)/2; j++)
                    Swap(j + p, list.Count - j - 1);

                return true;
            }
        // 이미 순서대로 정렬되어 있음 => 역순으로 뒤집
        for(int i=0;i<list.Count/2;i++)
            Swap(i, list.Count - i- 1);
        return false;
    }

    bool IsPrime(int number)
    {
      if(number < 2){
        return false;
      }

      for(int i=2; i*i<=number; i++)
      {
        if(number % i == 0){
          return false;
        }
      }

      return true;
    }
}