class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size(), i = n - 2, j = n - 1;

        while (i >= 0 && arr[i] >= arr[i + 1]) 
            i--;

        if (i >= 0) {
            while (arr[j] <= arr[i]) 
                j--;
            swap(arr[i], arr[j]);
        }

        reverse(arr.begin() + i + 1, arr.end());
    }
};
