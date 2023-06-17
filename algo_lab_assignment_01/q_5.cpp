#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>&adj_list, vector<bool>&visited){
    visited[node] = true;


    for(int adj_node: adj_list[node]){
        if(!visited[adj_node]){
            dfs(adj_node, adj_list, visited);
        }
    }
}

int count_connected_components(vector<vector<int>>&adj_list){
    int m = adj_list.size();
    vector<bool>visited(m, false);
    int count = 0;
    for(int i=0; i<m; i++){
        if(!visited[i]){
            dfs(i, adj_list, visited);
            count++;
        }
    }
    return count;
}

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    vector<vector<int>>adj_list(nodes);
    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int count = count_connected_components(adj_list);
    cout<<count<<endl;
    return 0;
}