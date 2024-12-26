class Solution {
public:
    long long maxSubarraySum(vector<int>& arr) {
        long long maxh = 0, maxf = LLONG_MIN;

        for (auto num : arr) {
            maxh = std::max(num + maxh, (long long)num);
            maxf = std::max(maxf, maxh);
        }

        return maxf;
    }
};
