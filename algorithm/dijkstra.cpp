#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
//10^9

const int INF = 1e9;

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v, w;
        cin>>u>>v>>w;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 1;
    dijkstra(src);

}