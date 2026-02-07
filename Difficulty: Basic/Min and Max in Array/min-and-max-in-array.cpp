class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min = INT_MAX,max=INT_MIN;
        for(auto it:arr){
            if(it>max) max=it;
            if(it<min) min =it;
        }
        arr.clear();
        arr.push_back(min);
        arr.push_back(max);
        return arr;
    }
};