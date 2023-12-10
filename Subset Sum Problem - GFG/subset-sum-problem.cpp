//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
       vector<bool> prev(sum+1,0), curr(sum+1,0);
       int n= arr.size();
       prev[0]=curr[0]=true;
       prev[arr[0]]=true;
       for(int i=1;i<n;i++)
       {
           for(int j=1;j<=sum;j++)
           {
               bool nottake=prev[j];
               bool take=false;
               if(arr[i]<=j)
               {
                   take= prev[j-arr[i]];
               }
               curr[j]=take | nottake;
           }
           
           
           prev=curr;
           
       }
       return prev[sum];
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends