#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const long long INF = 1e9;

vector<pair<int, int>>adj_list[N];
long long d[N];
bool bellman_ford(int n){
    for(int i = 1; i <= n; i++){
        for(int node = 1; node <= n; node++){
            for(pair<int,int>adj_node: adj_list[node]){
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if(d[u] + w < d[v]){
                    d[v] = d[u] + w;
                    if(i == n){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;

    for(int i = 0; i <= n; i++){
        d[i] = INF;
    }

    for(int i = 0; i < m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
    }
    bool negative_cycle = bellman_ford(n);

    if(negative_cycle){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }
    return 0;
}


/*
Input:
--------
4 5
1 2 1
2 4 1
3 1 1
4 1 -3
4 3 -2

Output:
--------
Yes

Input:
--------
5 7
1 2 3
1 3 2
2 3 1
2 4 -8
4 1 2
2 5 5
4 5 2

Output:
--------
Yes
*/
