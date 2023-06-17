#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int>pii;

int network_delay_time(vector<vector<int>>&times, int n, int k){
    const int INF = numeric_limits<int>::max();

    vector<vector<pair<int, int>>> graph(n+1);

    for(const auto &time : times){
        int u = time[0], v = time[1], w = time[2];
        graph[u].push_back({v, w});
    }

    vector<int>dis(n+1, INF);
    dis[k] = 0;

    priority_queue<pii, vector<pii>, greater<pii>>pq;

    while(!pq.empty()){
        int u = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        if(dist > dis[u]){
            continue;
        }

        for(const auto & neighbour : graph[u]){
            int v = neighbour.first;
            int w = neighbour.second;
            if(dis[u] + w < dis[v]){
                pq.push({dis[v], v});
            }
        }
    }

    int max_delay = 0;

    for(int i=1; i<=n; i++){
        max_delay = max(max_delay, dis[i]);
    }
    return max_delay == INF ? -1: max_delay;
}

int main(){
    int n,k;
    cout<<"Enter the number of nodes(n):";
    cin>>n;

    cout<<"enter the source node(k):";
    cin>>k;

    int num_times;
    cout<<"Enter the numbe rof travel times(edges)";
    cin>>num_times;

    vector<vector<int>>times(num_times, vector<int>(3));
    cout<<"Enter the travel times(ui, vi, wi)";
    for(int i=0; i<num_times; i++){
        cin>>times[i][0]>>times[i][i]>>times[i][2];
    }

    int res = network_delay_time(times, n, k);
    cout<<res<<endl;
    return 0;
}
