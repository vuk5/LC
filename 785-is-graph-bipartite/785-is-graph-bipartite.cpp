class Solution {
    // bool isbipartite(int src,vector<vector<int>> adj,vector<int> &color){
    //     queue<int> q;
    //     q.push(src);
    //     color[src]=1;
    //     while(!q.empty()){
    //         int node=q.front();
    //         q.pop();
    //         for(auto it:adj[node]){
    //             if(color[it]==-1){
    //                 color[it]=1-color[node];
    //                 q.push(it);
    //             }
    //             else if(color[it]==color[node])return false;
    //         }
    //     }
    //     return true;
    // }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        vector<int> color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                queue<int> q;
        q.push(i);
        color[i]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:graph[node]){
                if(color[it]==-1){
                    color[it]=1-color[node];
                    q.push(it);
                }
                else if(color[it]==color[node])return false;
            }
        }
            }
        }
        return true;
        
        
        
    }
};