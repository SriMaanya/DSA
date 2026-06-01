int merge(vector<int>& arr, int low, int mid, int high) {
        // Create temp arrays
        vector<int> temp;
        int cnt = 0;
        int left = low, right = mid + 1;

        // Merge two sorted halves
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else{
                temp.push_back(arr[right++]);
                cnt +=(mid-left+1);
            }
        }

        // Copy remaining elements from left half
        while (left <= mid)
            temp.push_back(arr[left++]);

        // Copy remaining elements from right half
        while (right <= high)
            temp.push_back(arr[right++]);

        // Copy sorted elements back to original array
        for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];
        
        return cnt;
    }

int mergeSort(vector<int>& arr, int low, int high) {
    
        int cnt = 0;
        if (low >= high)
            return cnt;

        // Find the middle index
        int mid = (low + high) / 2;

        // Recursively sort left half
        cnt +=mergeSort(arr, low, mid);

        // Recursively sort right half
        cnt +=mergeSort(arr, mid + 1, high);

        // Merge the two sorted halves
        cnt +=merge(arr, low, mid, high);
        
        return cnt;
}

class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        // Code Here
    
        int cnt = mergeSort(arr, 0, arr.size() - 1);
        
        return cnt;
    }
};

