// User function template for C++
#include <algorithm>
#include <bits/stdc++.h>

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        // code here
            
            // for(int i=1;i<arr.size();i++)
            //     arr[i-1] = arr[i];
            
            // arr[arr.size()-1] = temp;
            
            reverse(arr.begin(),arr.begin()+d);
            reverse(arr.begin()+d,arr.end());
            reverse(arr.begin(),arr.end());
            
        
    }
};