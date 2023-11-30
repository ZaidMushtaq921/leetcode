//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
 /* bool iscycle( int node, vector<int> adj[], unordered_map<int,bool> &visited, unordered_map<int,bool> &visiteddfs            )
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
        
    }*/
    
    
    
    
    bool isCyclic(int V, vector<int> adj[]) {
       // Vector to store the in-degree of each vertex
    vector<int> indegree(V);

    // Vector to store the final topological order
    int count=0;

    // Calculate in-degrees for each vertex
    for(int i = 0; i < V; i++)
    {
        for(auto neighbor : adj[i])
        {
            indegree[neighbor]++;
        }
    }

    // Queue to store vertices with in-degree 0
    queue<int> q;

    // Initialize the queue with vertices having in-degree 0
    for(int i = 0; i < indegree.size(); i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    // Perform BFS to find the topological order
    while(!q.empty())
    {
        // Get the front of the queue
        int front = q.front();
        q.pop();

        // Add the vertex to the topological order
        count++;

        // Update in-degrees of neighbors and enqueue if in-degree becomes 0
        for(auto neighbor : adj[front])
        {
            indegree[neighbor]--;
            if(indegree[neighbor] == 0)
            {
                q.push(neighbor);
            }
        }
    }
if(count<V)
return true;
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