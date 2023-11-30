class Solution
{
    public:
        void dfs(int node, vector<vector < int>> &graph, vector< int > &ans, vector< vector< int >> &result, unordered_map< int, bool>& visited)
        {

            visited[node] = true;
            ans.push_back(node);
            if (node == graph.size() - 1)
            {
                result.push_back(ans);
            }
            for (auto neighbor: graph[node])
            {
                if (!visited[neighbor])
                {
                    dfs(neighbor, graph, ans, result, visited);
                }
            }
           	ans.pop_back();
           	visited[node]=false;
        }

    vector<vector < int>> allPathsSourceTarget(vector<vector < int>> &graph)
    {
        unordered_map<int, bool> visited;
        vector<int> ans;
        vector<vector < int>> result;
        dfs(0, graph, ans, result, visited);
        return result;
    }
};