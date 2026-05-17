vector<int> generateRow(int row){
    int ans = 1;
    vector<int> ansRow;
    ansRow.push_back(ans);
    // Zero Based Indexing
    for(int col = 1;col<row;col++){
        ans = ans * (row - col);
        ans = ans / (col);
        ansRow.push_back(ans);
    }
    return ansRow;
}

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
            ans.push_back(generateRow(i));

        return ans;
    }
};