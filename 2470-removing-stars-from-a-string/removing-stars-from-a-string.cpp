class Solution {
public:
    string removeStars(string s) {
        string output="";
    for(auto c: s)
    {
        if(c=='*')
        {
            output.erase(output.size()-1);
        }
        else
        {
            output+=c;
        }
    }
        return output;
    }
};