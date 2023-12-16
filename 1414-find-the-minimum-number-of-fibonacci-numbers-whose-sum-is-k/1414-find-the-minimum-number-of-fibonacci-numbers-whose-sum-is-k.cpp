class Solution {
public:


    
    int findMinFibonacciNumbers(int n) {
        
        vector<int> fibo;
    

        if(n==0||n==1)
        {
            return n;
        }

        if(n==2)
        {
            return 1;
        }

        fibo.push_back(1);
        fibo.push_back(1);

        int next=fibo[0]+fibo[1];

        while(next<=n)
        {
            fibo.push_back(next);
            next=fibo[fibo.size()-1]+fibo[fibo.size()-2];
        }
        
        
        int ctr=0;
        int ind=fibo.size()-1;
        
        while(n>0)
        {
            while(ind>=0 && fibo[ind]>n)
            {
                ind--;
            }
            
            n=n-fibo[ind];
            ctr++;
            
        }
     
        return ctr;

        
        
    }
};