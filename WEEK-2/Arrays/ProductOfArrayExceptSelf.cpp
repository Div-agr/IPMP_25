class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i=0;
        int n=nums.size(),product=1,product2=1;
        vector<int>ans;
        for(int j=0; j<n; j++){
            if(nums[j]==0){
                product2=product;
                int k=j+1;
                while(k<n && nums[k]!=0){
                    product2*=nums[k];
                    k++;
                }
            }
            product*=nums[j];
        }
        while(i<n){
            if(nums[i]==0){
                ans.push_back(product2);
            }else{
                ans.push_back(product/nums[i]);
            }
            i++;
        }
        return ans;
    }
};