class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        sort(arr.begin(), arr.end());
        
        int count=0;
        
        for(int i=arr.size()-1; i>=0; i--){
            if(arr[i]<arr[arr.size()-1]){
                return arr[i];
            }
            else{
                count++;
            }
        }
        
        return -1;
    }
};