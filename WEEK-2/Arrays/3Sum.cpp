class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int i=0, n=nums.size();
        while(i<=n-3){
            if(i!=0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            int j=i+1;
            int k=n-1;
            int sum=0;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                }
            }
            i++;
        }
        return ans;
    }
};