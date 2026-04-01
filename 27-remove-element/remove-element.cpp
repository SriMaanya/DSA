class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0,i=0,j=0;

        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val){
                swap(nums[i],nums[j]);
                i++;
                cnt++;
            }
        }

        // while(i<nums.size() && j<nums.size()){
        //     if(nums[i]!=val && nums[j]!=val){
        //         i++;j++;
        //         cnt++;
        //     }
        //     else{
        //         if(nums[i]==val)
        //             i++;
        //         else
        //             j++;
        //     }
        //     if(i < nums.size() && j < nums.size() && i>j){
        //         int temp=nums[i];
        //         nums[i]=nums[j];
        //         nums[j]=temp;
        //         i++;
        //     }
        // }
        return cnt;
    }
};