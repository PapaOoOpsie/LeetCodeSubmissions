class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> adjList(n);
        
        for(int i = 0; i < edges.size(); ++i){
            adjList[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adjList[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        
        vector<double> maxProb(n, 0.0);
        maxProb[start] = 1.0;
        
        auto comp = [](pair<int, double>& a, pair<int, double>& b){return a.second < b.second;};
        priority_queue<pair<int, double>, vector<pair<int, double>>, decltype(comp)> pq(comp);
        
        pq.push({start, maxProb[start]});
        

        while(!pq.empty()){
            pair<int, double> cur = pq.top(); pq.pop();
            int curNode = cur.first;
            double curProb = cur.second;
            
            if(curNode == end){
                break;
            }
            
            for(pair<int, double>& nei : adjList[curNode]){
                int neiNode = nei.first;
                double neiProb = nei.second;
                
                if(curProb * neiProb > maxProb[neiNode]){
                    maxProb[neiNode] = max(maxProb[neiNode], curProb * neiProb);
                    pq.push({neiNode, maxProb[neiNode]});
                }
            }
        }
        
        return maxProb[end];
    }
};