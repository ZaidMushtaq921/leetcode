class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int check;
        int count=0;
        if(ruleKey == "type")
           {
               check=0;
           }
           else if(ruleKey == "color")
           {
               check=1;
           }
           else
           {
               check =2;
           }
        for(int i=0;i<items.size();i++)
           {
               if(items[i][check]==ruleValue)
               {
                   count++;
               }
           }
           return count;
    }
};