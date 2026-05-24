class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<long,long> mpp;
        mpp[0]=1;
        int sum = 0;
        long count = 0;
        for(int i=0;i<arr.size();i++){
            sum ^=arr[i];
            int rem = k ^ sum;
            count +=mpp[rem];
            mpp[sum] +=1;
        }
        
        return count;
    }
};