class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        while(n!=0)
        {
            if(n==1)
                return true;
            if(n%2==1)
                return false;
            n=n/2;
            
        }
         if(n==0)
                return false;
        return true;
        
    }
};