class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
       
            unordered_map<int,list<int>> m;
            for(int i=0;i<groupSizes.size();i++)
            {
                    m[groupSizes[i]].push_back(i);
            }
            vector<int> ans;
            vector<vector<int>> result;
            for(auto it:m)
            {
                    for(auto i:it.second)
                    {
                             ans.push_back(i);   
                            if(ans.size()==it.first)
                            {
                                    result.push_back(ans);
                                    ans.clear();
                            }
                                   
                    }
            }
            
return result; 
    }
};