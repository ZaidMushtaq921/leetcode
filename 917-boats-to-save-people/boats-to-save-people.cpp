class Solution {
public:
    int numRescueBoats(std::vector<int>& people, int limit) {
        std::sort(people.begin(), people.end());
        int minBoats = 0;
        int i = 0;
        int j = people.size() - 1;
        
        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
            }
            minBoats++;
            j--;  
        }
        
        return minBoats;
    }
};