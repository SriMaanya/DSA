class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        
        
        int ele = 0,cnt = 0;
        
        for(int i = 0;i < arr.size();i++){
            if(cnt == 0){
                ele = arr[i];
            }
            if(ele == arr[i])
                cnt++;
            else
                cnt--;
        }
        
        int cntEle=0;
        
        for(int i = 0;i < arr.size();i++){
            if( ele == arr[i])
                cntEle++;
        }
        
        if(cntEle > (arr.size()/2))
            return ele;
        else
            return -1;
        
    }
};