// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        int xor1=0;
        for(int i=0;i<n;i++){
            xor1 = (xor1^arr[i]);
        }
        return xor1; 
    }
};