class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        //transpose
        for(int i = 0; i<matrix.size() - 1; i++){
            for(int j = i+1; j<matrix[i].size(); j++)
                swap(matrix[j][i], matrix[i][j]);
        }

        //reverse

        for(int i=0;i<matrix.size();i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};