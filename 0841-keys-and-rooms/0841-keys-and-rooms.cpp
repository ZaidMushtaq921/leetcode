class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
         unordered_map<int,bool> visited;
            queue<int> q;
            q.push(0);
            visited[0]=true;
            int count=0;
            while(!q.empty())
            {
                    int front=q.front();
                    q.pop();
                    count++;
                    for(auto it:rooms[front])
                    {
                            if(!visited[it])
                            {
                                    q.push(it);
                                    visited[it]=true;
                            }
                    }   
            }
            
        if(count<rooms.size())
                return false;
            return true;
            
                  
    }
};