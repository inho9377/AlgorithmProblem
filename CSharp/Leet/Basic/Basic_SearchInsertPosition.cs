public class SearchInsertClass {
    public int SearchInsert(int[] nums, int target) 
    {
        int pivot = 0;
        int left = 0;
        int right = nums.Length-1;
        while(left <= right)
        {
          pivot = (left + right) / 2;
          if(nums[pivot] < target)
          {
            left = pivot+1;
          }
          else if (nums[pivot] > target)
          {
            right = pivot-1;
          }
          else
          {
            return pivot;
          }
        }

        return left;
    }
}