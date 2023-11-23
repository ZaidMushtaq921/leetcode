//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        
        //sort(Arr.begin(),Arr.end());
        priority_queue<int,vector<int> ,greater<int>> pq;
        for(int i=0;i<Arr.size();i++)
        {
            int sum=0;
            for(int j=i;j<Arr.size();j++)
            {
                sum+=Arr[j];
                if(pq.size()<K)
                {
                    pq.push(sum); 
                }
                else if(sum>pq.top())
                {
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
        int ans=pq.top();
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N;
        cin>>K;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        int ans=ob.kthLargest(Arr,N,K);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends