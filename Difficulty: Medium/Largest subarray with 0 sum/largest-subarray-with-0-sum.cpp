class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int sum = 0;
        map<int,int> mpp;
        mpp[0] = -1;
        int len = 0;
        
        for(int i=0;i<arr.size();i++){
            sum +=arr[i];
            
            if(mpp.find(sum) != mpp.end()){
                len = max(len,i - mpp[sum]);
            }
            else
                mpp[sum]=i;
        }
        return len;
    }
};