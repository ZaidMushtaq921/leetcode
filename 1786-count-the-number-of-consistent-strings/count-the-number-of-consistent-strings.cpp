class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,bool> allowedHash;
        for(auto c: allowed)
        {
            allowedHash[c]=true;
        }
        
        int count=0;
       
        for(int i =0;i<words.size();i++)
        {
             bool flag=true;
            for(auto c : words[i])
            {
                if(!allowedHash[c])
                {
                    flag = false;
                }
            }
if(flag)
{
                count++;

}
        }
        return count;
    }
    
};