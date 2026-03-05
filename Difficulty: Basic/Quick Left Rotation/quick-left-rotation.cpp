class Solution {

  public:
    void leftRotate(vector<int>& arr, int k) {
        // Your code goes here
        int n = arr.size();
        k = k%n;
        
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
        reverse(arr.begin(),arr.end());
        
    }
};