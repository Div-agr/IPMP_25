class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> umap;
        int sum = 0;
        umap[0] = -1;
        int res = 0;
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            sum = sum + arr[i];
            int req = sum - k;
            if (umap.find(req) != umap.end()) {
                res = max(res, i - umap[req]);
            }
            if (umap.find(sum) == umap.end()) {
                umap[sum] = i;
            }
        } 
        return res;
    }
};