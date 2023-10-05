class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
         bool equal=true; 
        vector<int> sp1(27,0);
        vector<int> sp2(27,0);
           for(int i=0;i<s1.size();i++)
            {
              int n=s1[i]-96;
              sp1[n]+=1;
            }
        
        int window=s1.size();
        for(int i=0;i<=s2.size()-window;i++)
        {
            bool equal=true; 
            for(int k=i;k<window+i;k++)
            {
                 int n=s2[k]-96;
                 sp2[n]+=1;
            }
            for(int j=1;j<27;j++)
            {
                if(sp1[j]!=sp2[j])
                {
                     equal = false;
                    break;
                }
                
            }
            if(equal==true)
                return true ;
            else
            {
               fill(sp2.begin(),sp2.end(),0);  
            }
        }
        return false;
    }
};