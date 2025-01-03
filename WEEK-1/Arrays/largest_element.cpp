class Solution {
  public:
    int largest(vector<int> &arr) {
        int m=INT_MIN;
        for(int i=0; i<arr.size(); i++){
            m=max(m,arr[i]);
        }
        return m;
    }
};
