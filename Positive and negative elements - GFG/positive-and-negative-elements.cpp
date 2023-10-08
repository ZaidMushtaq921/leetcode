//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int arr[],int n)
    {
       vector<int> ans;
       int pos=0;
       int neg=0;
       for(int i=0;i<n/2;i++)
       {
           while(arr[pos]<0)
           pos++;
           while(arr[neg]>=0)
           neg++;
           ans.push_back(arr[pos++]);
           ans.push_back(arr[neg++]);
       }
       return ans;
       
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends