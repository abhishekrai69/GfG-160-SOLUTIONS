class Solution {
public:
    void pushZerosToEnd(std::vector<int>& arr) {
        int n = arr.size();
        int nonZeroIndex = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                std::swap(arr[nonZeroIndex++], arr[i]);
            }
        }
    }
};
