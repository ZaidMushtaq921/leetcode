class Solution {
    bool areVectorsEqual(int a[], int  b[]){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) 
            return false;
        int count1[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            count1[index]++;
        }
       int i=0;
        int window=s1.length();
        int count2[26]={0};
        
        while(i<window)
        {
           int index=s2[i]-'a';
            count2[index]++; 
            i++;
        }
        if(areVectorsEqual(count1,count2))
            return true;
        while(i<s2.length())
        {
           
            int index= s2[i]-'a';
            count2[index]++;
            
             index = s2[i-window]-'a';
            count2[index]--;
           i++;
             if(areVectorsEqual(count1,count2))
            return true;
            
            
        }
  
        return false;
    }
};
