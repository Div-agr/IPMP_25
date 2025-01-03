class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int temp=nums[0],count=1;
        int ans[30000];
        ans[0]=temp;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=temp)
            {   temp=nums[i];
                ans[count]=nums[i];
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            nums[i]=ans[i];
        }
        return count;
    }
};