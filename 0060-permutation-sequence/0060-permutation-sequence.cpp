class Solution {
public:
    string getPermutation(int n, int k) {
      string s;
       
        for(int i=1;i<=n;i++)
      {
          char c= i + '0';  
          s.push_back(c);
      }
         int i=1;
        while(i<k){
        bool res= next_permutation(s.begin(),s.end());
            i++;
        };
        return s;
    }
};