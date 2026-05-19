class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0,rightSum = 0;
        int total_sum = 0;
        for(int i=0;i<nums.size();i++)
            total_sum +=nums[i];
        
        for(int i=0;i<nums.size();i++){
            rightSum = total_sum - leftSum - nums[i];

            if(rightSum == leftSum)
                return i;
            leftSum +=nums[i];
        }
        return -1;
    }
};