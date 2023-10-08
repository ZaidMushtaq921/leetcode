//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> pos;
	    vector<int> neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        neg.push_back(arr[i]);
	        else
	        pos.push_back(arr[i]);
	    }
	     int i=0;
	    int j=0;
	    int k=0;
	    while(i<pos.size())
	    {
	        arr[k++]=pos[i++];
	    }
	    while(j<neg.size())
	    {
	        arr[k++]=neg[j++];
	    }
	    
    }
};
/*class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> pos;
	    vector<int> neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        neg.push_back(arr[i]);
	        else
	        pos.push_back(arr[i]);
	    }
	    int i=0;
	    int j=0;
	    int k=0;
	    while(i<pos.size()&&j<neg.size())
	    {
	        arr[k++]=pos[i++];
	        arr[k++]=neg[j++];
	    }
	    while(i<pos.size())
	    {
	        arr[k++]=pos[i++];
	    }
	    
	    while(j<neg.size())
	    {
	        arr[k++]=neg[j++];
	    }
	}
};*/

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends