#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

const long long INF = 1e18;

vector<pair<int, int>>adj_list[N];

long long d[N];
int visited[N], parent[N];

void dijkstra(int src, int n, int m){
  for (int i = 1; i <= n; i++){
    d[i] = INF;
  }
  d[src] = 0;
  priority_queue<pair<int, int>>pq;
  pq.push({0, src});

  while(!pq.empty()){
    pair<int, int>head = pq.top();
    pq.pop();
    int node = head.second;
    if(!visited[node]) {
      visited[node] = 1;

      for(auto child: adj_list[node]){
        int child_node = child.first;
        int c = child.second;
        if(d[child_node] > d[node]  + c){
          d[child_node] = d[node] + c;
          parent[child_node] = node;
          pq.push({-d[child_node], child_node});
        }
      }
    }
  }
}

void path_print(int dis, int src){
  if(!visited[dis]){
    cout<<-1<<endl;;
  } 
  else{
    int current_node = dis;
    vector<int>path;
    while(1){
      path.push_back(current_node);
      if(current_node == src){
        break;
      }
      current_node = parent[current_node];
    }

    reverse(path.begin(), path.end());
    for(auto it: path){
      cout<<it<<" ";
    }
    cout<<endl;;
  }
}

int main(){
  int n, m;
  cin>>n>>m;

  for(int i = 1; i <= m; i++){
    int u, v, w;
    cin>>u>>v>>w;
    adj_list[u].push_back({v, w});
    adj_list[v].push_back({u, w});
  }

  int src = 1;
  dijkstra(src, n, m);

  path_print(n, src);

  return 0;
}
/*
10 10
1 4 201
2 3 238
3 4 40
3 6 231
3 8 45 
4 5 227
4 6 58
4 9 55
5 7 14
6 10 242


*/