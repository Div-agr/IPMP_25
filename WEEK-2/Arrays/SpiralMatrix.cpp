class Solution {
    vector<int> ans;
public:
    void leftToRight(int row, int start, int end, vector<vector<int>>&matrix){
        for(int it=start; it<=end; it++){
            ans.push_back(matrix[row][it]);
        }
    }

    void rightToLeft(int row, int start, int end, vector<vector<int>>&matrix){
        for(int it=start; it>=end; it--){
            ans.push_back(matrix[row][it]);
        }
    }

    void topToBottom(int col, int start, int end, vector<vector<int>>&matrix){
        for(int it=start; it<=end; it++){
            ans.push_back(matrix[it][col]);
        }
    }

    void bottomToTop(int col, int start, int end, vector<vector<int>>&matrix){
        for(int it=start; it>=end; it--){
            ans.push_back(matrix[it][col]);
        }
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int i=0,j=m-1,k=n-1;
        int top=0,left=0,right=n-1,bottom=m-1;
        int it=0;
        while(top<=bottom && left<=right){
            if(it==0){
                leftToRight(top,left,right,matrix);
                top++;
            }else if(it==1){
                topToBottom(right,top,bottom,matrix);
                right--;
            }else if(it==2){
                rightToLeft(bottom,right,left,matrix);
                bottom--;
            }else{
                bottomToTop(left,bottom,top,matrix);
                left++;
            }
            it=(it+1)%4;
        }
        return ans;   
    }
};