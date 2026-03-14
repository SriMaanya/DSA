class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int cnt1=0,cnt2=0;
        int max1=0,max0=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                cnt2=0;
                cnt1++;
                max1=max(max1,cnt1);
            }
            else{
                cnt1=0;
                cnt2++;
                max0=max(max0,cnt2);
            }
        }
        return max(max1,max0);
    }
};