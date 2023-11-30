//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

	public:
/*	void dfs(int node,vector<int> adj[],  unordered_map<int,bool>& visited, stack<int> &ans)
	{
	    visited[node]=true;
	    for(auto nbr: adj[node])
	    {
	        if(!visited[nbr])
	        {
	            dfs(nbr,adj,visited,ans);
	        }
	    }
	    
	    ans.push(node);
	    
	    
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int> ans;
	    vector<int> result;
	    unordered_map<int,bool> visited;
	   for(int i=0;i<V;i++)
	   {
	       if(!visited[i])
	       {
	           dfs(i,adj,visited,ans);
	       }
	   }
	   while(!ans.empty())
	   {
	       result.push_back(ans.top());
	       ans.pop();

	   }
	   return result;
	}
};*/
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> indegree(V);
	    vector<int> ans;
	    for(int i=0;i<V;i++)
	    {
	        for(auto neighbor: adj[i])
	        {
	            indegree[neighbor]++;
	            
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<indegree.size();i++)
	    {
	        if(indegree[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty())
	    {
	        int front=q.front();
	        q.pop();
	        ans.push_back(front);
	        for(auto neighbor: adj[front])
	        {
	            indegree[neighbor]--;
	            if(indegree[neighbor]==0)
	            {
	                q.push(neighbor);
	            }
	        }
	        
	    }
	    
    return ans;
	}
};


//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends