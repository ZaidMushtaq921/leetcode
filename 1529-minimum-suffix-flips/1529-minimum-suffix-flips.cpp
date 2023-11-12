class Solution {
public:
    int minFlips(string target) {
        char allare ='0';
        int count=0;
        for(auto ch: target)
        {
            if(allare!=ch)
            {
                allare=ch;
                count++;
            }          
        }
    return count;
    }
};