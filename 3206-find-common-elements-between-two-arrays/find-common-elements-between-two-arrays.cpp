
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        map<int, int> n;

        for (int num : nums1) {
            m[num]++;
        }
        
        for (int num : nums2) {
            n[num]++;
        }

        int first = 0;
        int second = 0;

        for (const auto& pair : m) {
            if (n.count(pair.first)) {
                first += pair.second;
                second += n[pair.first];
            }
        }

        return {first, second};
    }
};
