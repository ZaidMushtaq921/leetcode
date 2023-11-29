class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, list<int>> graph;
            for(auto e: edges)
            {
                    graph[e[0]].push_back(e[1]);
                    graph[e[1]].push_back(e[0]);
            }
            vector<bool> visited(n,0);
            queue<int> q;
            q.push(source);
            visited[source]=true;
            while(!q.empty())
            {
                   int frontnode = q.front();
                    q.pop();
                   if(frontnode == destination)
                   {
                           return true;
                   }
                    else
                    {
                        for(auto node: graph[frontnode])
                        {
                                
                            if(!visited[node])
                            {
                                       q.push(node);
                           visited[node]=true; 
                            }
                                
                        }       
                    }      
            }
           return false; 
            
            
    }
};