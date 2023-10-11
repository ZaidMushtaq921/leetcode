class Solution {
public:
    bool rotateString(string s, string goal) {
      if(s.length()!=goal.length())
          return false;
        // string check=s+s;
        return (s+s).find(goal)!=string::npos;
        
    }
};
// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if(s.size() != goal.size()) return false;
//         string check = s+s;
//         return check.find(goal) != string::npos;
//     }
// };
