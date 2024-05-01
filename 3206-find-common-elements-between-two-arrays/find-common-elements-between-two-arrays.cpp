#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> findIntersectionValues(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::map<int, int> m;
        std::map<int, int> n;

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
