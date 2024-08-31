class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int, double>>> adj(n);
        for(int i = 0; i < edges.size(); i++){
            int a = edges[i][0], b = edges[i][1];
            adj[a].push_back({b, succProb[i]});
            adj[b].push_back({a, succProb[i]});
        }
        vector<double> dis(n, -1);
        priority_queue<pair<double, int>> q;
        q.push({1, start_node});
        dis[start_node] = 1;
        while(!q.empty()){
            int u = q.top().second;
            double curr_d = q.top().first;
            q.pop();

            if(dis[u] != curr_d)continue;
            for(auto p : adj[u]){
                int v = p.first;
                double w = p.second;
                if(dis[u] * w > dis[v]){
                    q.push({dis[u] * w, v});
                    dis[v] = dis[u] * w;
                }
            }
        }
        if(dis[end_node] == -1)
            return 0;
        return dis[end_node];
    }
};