using System.Collections.Generic;


public class _001_TwoSum {
    public int[] Problem(int[] nums, int target) {
        int[] res = new int[2];
        Dictionary<int, int> dic = new Dictionary<int, int>();
        for(int i=0; i<nums.Length; i++)
        {
          int targetNum = target - nums[i];
          if(dic.ContainsKey(targetNum))
          {
              int a = dic[targetNum];
              int b= i;
              if(a>b)
              {
                  res[0] = b;
                  res[1] = a;
              }
              else
              {
                  res[0] = a;
                  res[1] = b;
              }
          }
          else
          {
              if(dic.ContainsKey(nums[i]) == false)
              {
                  dic.Add(nums[i], i);
              }
          }
        }

        return res;
    }
}