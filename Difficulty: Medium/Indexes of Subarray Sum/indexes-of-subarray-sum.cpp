class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int right = 0,left = 0;
        int sum = 0;
        
        while(right<arr.size()){
            
            sum +=arr[right];
            
            // if(sum<target) right++;
            
            while(sum>target){
                sum -= arr[left];
                left++;
            }
            
            if(sum == target){
                left +=1;right +=1;
                return {left,right};
            }
            
            right++;
                
        }
        return {-1};
    }
};