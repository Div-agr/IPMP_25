class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp={{0,1}};
        int sum=0,cnt=0;
        for(auto it: nums){
            sum+=it;
            cnt+=mpp[sum-k];
            mpp[sum]++;
        }
        return cnt;
    }
};