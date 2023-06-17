#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int visited[N];

vector<int>adj_list[N];

void dfs(int node){
    cout<<node<<endl;
    visited[node] = 1;

    for(int adj_node: adj_list[node]){
        if(visited[adj_node] == 0){
            dfs(adj_node);
        }
    }
}



int main(){
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src = 1;
    dfs(src);
    if(visited[n]){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;

}