class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int xor1=0,xor2=0;
        int n=arr.size()+1;
        for(int i=0;i<arr.size();i++){
            xor2 = (xor2^arr[i]);
            xor1 = (xor1^(i+1));
        }
        xor1=(xor1^n);
        
        return xor1^xor2;
    }
};