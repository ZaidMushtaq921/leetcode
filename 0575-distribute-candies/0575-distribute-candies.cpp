class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        int n=candy.size()/2;
        unordered_map<int,int> m;
        for(int i=0;i<candy.size();i++)
        {
            m[candy[i]]++;
        }
        int x=m.size();
        if(x>=n)
            return n;
        else
            return x;
    }
};