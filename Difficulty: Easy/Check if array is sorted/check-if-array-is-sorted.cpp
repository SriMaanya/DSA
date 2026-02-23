class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for(int i=1;i<arr.size();i++){
            if(arr[i]>=arr[i-1]){
                continue;   
            }
            else return false;
            
        }
        return true;
    }
};