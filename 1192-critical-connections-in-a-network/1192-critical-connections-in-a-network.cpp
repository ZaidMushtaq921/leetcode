class Solution
{
    private:
        int timer = 1;
    void dfs(int node, int parent, unordered_map<int, bool> &vis, vector<int> adj[],          vector<int> &low, vector<int> &tin, vector< vector< int>> &result)
    {
        vis[node] = true;
        tin[node] = low[node] = timer;
        timer++;
        for (auto it: adj[node])
        {
            if (it == parent) continue;
            if (!vis[it])
            {
                dfs(it, node, vis, adj, low, tin, result);
                low[node] = min(low[node], low[it]);
                if (low[it] > tin[node])
                {
                    result.push_back({ it,
                        node });
                }
            }
            else
            {
                low[node] = min(low[node], low[it]);
            }
        }
    }

    public:
        vector<vector < int>> criticalConnections(int n, vector<vector < int>> &connections)
        {
            vector<int> adj[n];
            for (auto it: connections)
            {
                adj[it[0]].push_back(it[1]);
                adj[it[1]].push_back(it[0]);
            }
            vector<vector < int>> result;
            vector<int> low(n);
            vector<int> tin(n);
            unordered_map<int, bool> vis;
                dfs(0,-1,vis,adj,low,tin,result);
                return result;
        }
};