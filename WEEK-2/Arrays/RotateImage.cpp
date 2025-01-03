class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0; i<n; i++){
            vector<int>v;
            for(int j=n-1;j>=0;j--){
                v.push_back(matrix[j][i]);
            }
            matrix.push_back(v);
        }
        matrix.erase(matrix.begin(),matrix.begin()+n);
    }
};