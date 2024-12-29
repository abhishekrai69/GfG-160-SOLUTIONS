class Solution {
public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        unordered_set<int> sa(a.begin(), a.end());
        unordered_set<int> res_set;
        for (int num : b) {
            if (sa.erase(num)) {  
                res_set.insert(num);
            }
        }
        return vector<int>(res_set.begin(), res_set.end());
    }
};
