class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result;
        unordered_map<int, int> m;

        int count = 0;
        for (int i = 0, j = 0; i < A.size(); i++, j++) {
            m[A[i]]++;
             if (m[A[i]] > 1) {
                count++;
            }
            m[B[j]]++;
            if (m[B[j]] > 1) {
                count++;
            }
            result.push_back(count);
        }
        return result;
    }
};
