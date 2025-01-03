class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merger;
        sort(intervals.begin(),intervals.end());
        merger.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++){
            if(merger.back()[1] >=intervals[i][0]){
                merger.back()[1]=max(merger.back()[1],intervals[i][1]);
            }else{
                merger.push_back(intervals[i]);
            }
        }
        return merger;
    }
};