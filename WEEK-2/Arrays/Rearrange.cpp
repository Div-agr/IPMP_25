class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posindex=0,negindex=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[posindex*2]=nums[i];
                posindex++;
            }
            else
            {
                ans[negindex*2+1]=nums[i];
                negindex++;
            }
        }
    return ans;
    }
};