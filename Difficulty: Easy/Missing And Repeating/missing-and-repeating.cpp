class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long sum = 1LL * n * (n+1) / 2;
        long long squares = 1LL * n * (n+1) * (2 * n + 1) / 6;
        long long s1 = 0; //sum
        long long s2 = 0; //squares
        
        for(int i=0;i<n;i++){
            s1 +=arr[i];
            s2 +=1LL * arr[i] * arr[i];
        }
        
        long long val1 = sum - s1; // y -x
        long long val2 = squares - s2; // y2 - x2
        val2 = val2 / val1; // y + x
        
        long long y = (val1 + val2) / 2;
        long long x = ( y - val1);
        
        return {(int)x , (int)y};
    }
};