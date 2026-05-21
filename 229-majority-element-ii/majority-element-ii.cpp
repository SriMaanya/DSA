class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0,cnt2 = 0;
        int ele1 = 0,ele2 = 0;

        for(int x : nums){
            if(cnt1==0 && x!=ele2){
                cnt1=1;
                ele1=x;
            }
            else if(cnt2==0 && ele1!=x){
                cnt2=1;
                ele2=x;
            }
            else if(x==ele1) cnt1++;
            else if(x==ele2) cnt2++;
            else{
                cnt1--,cnt2--;
            }
        }
        cnt1=0,cnt2=0;
        for(int x : nums){
            if(x==ele1) cnt1++;
            else if(x==ele2)cnt2++;
        }

        vector<int> ans;
        int mini = (int)(nums.size()/3) + 1;
        if(cnt1 >= mini) ans.push_back(ele1);
        if(cnt2 >= mini) ans.push_back(ele2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};