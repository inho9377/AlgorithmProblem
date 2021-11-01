public class MaxSubArrayClass {
    public int MaxSubArray(int[] nums) {
        int[] maxV = new int[nums.Length];
        maxV[0] = nums[0];
        int max = maxV[0];
        for(int i=1; i<nums.Length;i++)
        {
          maxV[i] = System.Math.Max(nums[i], nums[i] + maxV[i-1]);
          if(maxV[i] > max)
          {
            max = maxV[i];
          }
        }
        return max;
    }
}