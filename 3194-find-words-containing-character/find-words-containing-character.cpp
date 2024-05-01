class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        
        for(int i =0; i< words.size();i++)
        {
            size_t found = words[i].find(x);
            if(found != string::npos)
            {
                result.push_back(i);
            }
        }
        return result;
        
    }
};