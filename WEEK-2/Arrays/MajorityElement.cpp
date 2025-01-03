class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=nums[0],cnt=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==element)
                cnt++;
            else if(cnt==0)
            {
                cnt=0;
                element=nums[i];
            }
            else
                cnt--;
        }
        return element;
    }
};