using System.Collections.Generic;


public class _004_MedianOfTwoSortedArrays
{
    public double Problem(int[] nums1, int[] nums2)
    {
      List<int> merge = new List<int>();

      int index=0;
      int oneIndex=0;
      int twoIndex=0;
      while(index < (nums1.Length + nums2.Length))
      {
        int leftValue = int.MaxValue;
        if(nums1.Length > oneIndex)
        {
          leftValue = nums1[oneIndex];
        }
        int rightValue = int.MaxValue;
        if(nums2.Length>twoIndex)
        {
          rightValue = nums2[twoIndex];
        }

        if(leftValue<rightValue)
        {
          merge.Add(leftValue);
          oneIndex++;
        }
        else
        {
          merge.Add(rightValue);
          twoIndex++;
        }

        index++;
      }

      if(merge.Count == 0)
      return 0;
      else if (merge.Count % 2 == 0)
      {
        return (merge[merge.Count/2] + merge[merge.Count/2-1]) / 2.0;
      }
      else
      {
        return merge[merge.Count/2];
      }


    }

}