class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0],slargest = -1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>largest){
                slargest = largest;
                largest = arr[i];
            }
            else if(slargest < arr[i] && arr[i] != largest)
                slargest = arr[i];
        }
        if(slargest == -1)
            return -1;
        else
            return slargest;
    }
};