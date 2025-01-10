class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size(),index=0;
        while(1){
            for(int i=1; i<n; i++){
                if(strs[i][index]=='\0' || strs[i][index]!=strs[0][index]){
                    return ans;
                }
            }
            if(strs[0][index]!='\0')
                ans+=strs[0][index];
            else{
                return ans;
            }
            index++;
        }
        return ans;
    }
};