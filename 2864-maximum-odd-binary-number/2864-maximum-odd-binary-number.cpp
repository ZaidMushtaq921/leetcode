class Solution {
public:
    string maximumOddBinaryNumber(string s) {
    int onecount=0;
        int zerocount=0;
        string result;
for(auto ch: s)
{
    if(ch=='1')
    {
        onecount++;
    }
    else
    {
        zerocount++;
    }
}
    for(int i=1;i<onecount;i++)
    {
        result=result+ '1';
    }
     for(int i=0;i<zerocount;i++)
        {
           result=result+ '0'; 
        }
        
        result=result+ '1'; 
       return result; 
    }
};