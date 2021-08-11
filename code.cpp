class Solution {
public:
     vector<vector<int>>res;
    void dfs(int size,int current_node,vector<vector<int>>& graph,vector<int>r)
    {
        r.push_back(current_node);
        if(current_node==size)
        {
            res.push_back(r);
        }
      for(auto s:graph[current_node])
        {
            dfs(size,s,graph,r);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    
        vector<int>r;
        int size=graph.size()-1;
        dfs(size,0,graph,r);
        return res;
    }
};
