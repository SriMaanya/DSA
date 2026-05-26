class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mpp;
        mpp[0]=-1;
        int sum=0,len=0;

        for(int i=0;i<nums.size();i++){

            if(nums[i] == 0)
                sum +=-1;
            else if(nums[i] == 1)
                sum +=1;

            if(mpp.find(sum) != mpp.end()){
                len = max(len,i - mpp[sum]);
            }
            else
                mpp[sum] = i;
        }
        return len;        
    }
};