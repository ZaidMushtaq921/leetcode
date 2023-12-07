//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <vector>
#include <algorithm>  // Add this for the sort function

class Solution {
public:
   static bool comp(const vector<int> &a,const vector<int> &b) {
        return a[2] < b[2];
    }

    void makeSet(vector<int> &parent, vector<int> &rank, int &V) {
        for (int i = 0; i < V; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int findParent(vector<int> &parent, int node) {
        if (node == parent[node])
            return node;

        return parent[node] = findParent(parent, parent[node]);
    }

    void unionSet(vector<int> &parent, vector<int> &rank, int u, int v) {
        u = findParent(parent, u);
        v = findParent(parent, v);
        if (rank[u] < rank[v])
            parent[u] = v;
        else if (rank[v] < rank[u])
            parent[v] = u;
        else {
            parent[u] = v;
            rank[u]++;
        }
    }

    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        vector<int> parent(V);
        vector<int> rank(V);
        makeSet(parent, rank, V);

        // Iterate over vertices and edges to sort them
        vector<vector<int>> edges;
        for (int i = 0; i < V; i++) {
            for (const auto &edge : adj[i]) {
                edges.push_back({i, edge[0], edge[1]});
            }
        }

        // Sort the edges based on weights
        sort(edges.begin(), edges.end(), comp);

        int result = 0;
        for (int i = 0; i < edges.size(); i++) {
            int u = findParent(parent, edges[i][0]);
            int v = findParent(parent, edges[i][1]);
            int wt = edges[i][2];
            if (u != v) {
                unionSet(parent, rank, u, v);
                result += wt;
            }
        }

        return result;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends