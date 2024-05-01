class Solution {
public:
   string truncateSentence(string s, int k) {
    int count = 0;
    int endIndex = 0;
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            count++;
        }
        if (count == k) {
            endIndex = i;
            break;
        }
    }
    if(endIndex==0){
        return s;
    }
    return s.substr(0, endIndex);
 }
};