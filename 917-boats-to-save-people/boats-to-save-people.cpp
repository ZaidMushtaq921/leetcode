class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int minBoats=0;
        sort(people.begin(),people.end());
        int i=0;
        int j=people.size()-1;
        while(i<=j)
        {
            int sum=people[i]+people[j];
            if(sum<=limit)
            {
                i++;
            }
                minBoats++;
                j--;  
        }
        return minBoats;
        
    }
};