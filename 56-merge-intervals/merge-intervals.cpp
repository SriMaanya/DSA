class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        for(int i=0;i<n;i++){

            if(ans.empty()){
                ans.push_back(intervals[i]);
                continue;
            }
            int start = ans.back()[0];
            int end = ans.back()[1];
            if(intervals[i][0]<=end){
                end = max(end,intervals[i][1]);
                ans.back()[1] = end;
            }
            else
                ans.push_back(intervals[i]);
        }

        return ans;        
    }
};