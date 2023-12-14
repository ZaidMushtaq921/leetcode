class Solution {
public:
    int maximumGroups(vector<int>& grades) {
            int prevsum=0;
            int prevcount=0;
            sort(grades.begin(),grades.end());
            int nextsum=0;
            int nextcount=0;
            int count=0;
          for(int i=0;i<grades.size();i++)
          {
                
                  nextsum+=grades[i];
                  nextcount++; 
                    if(prevsum<nextsum && prevcount<nextcount)
                  {
                          count++;
                          prevsum=nextsum;
                             prevcount=nextcount;
                          nextsum=0;
                          nextcount=0;
                       
                  }
          }
      return count;
    }
};