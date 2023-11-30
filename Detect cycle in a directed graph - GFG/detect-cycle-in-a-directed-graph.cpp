//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool iscycle( int node, vector<int> adj[], unordered_map<int,bool> &visited, unordered_map<int,bool> &visiteddfs            )
  {
      visited[node]=true;
      visiteddfs[node]=true;
      
      for(auto neighbor:adj[node])
      {
          if(!visited[neighbor])
          {
              bool cycle = iscycle(neighbor,adj,visited,visiteddfs);
              if(cycle)
              {
                  return true;
              }
          }
          else if(visiteddfs[neighbor])
          {
              return true;
          }
      }
       visiteddfs[node]=false;
 return false; 
  }
  
  
  
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        unordered_map<int,bool> visited;
         unordered_map<int,bool> visiteddfs;
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
               bool cycle = iscycle(i,adj,visited,visiteddfs);
               if(cycle)
               {
                   return true;
               }
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends