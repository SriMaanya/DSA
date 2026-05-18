class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= target){
                return i;
            }
            else if( i+1 < nums.size() && nums[i] < target && target < nums[i+1]){
                return i+1;
            }
        }  
        return nums.size();
    }
};