#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int visited[N];
int level_array[N];

vector<int>adj_list[N];


void bfs(int src){
    queue<int>q;

    visited[src] = 1;
    level_array[src] = 0;
    q.push(src);

    while(!q.empty()){
        int head = q.front();
        q.pop();

        for(int adj_node: adj_list[head]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;

                level_array[adj_node] = level_array[head] + 1;
                q.push(adj_node);
            }
        }
    }
}
int main(){
    int nodes = 6;
    int edges = 7;
    adj_list[0] = {1, 3, 4};
    adj_list[1] = {0, 2, 5};
    adj_list[2] = {1, 4};
    adj_list[3] = {0};
    adj_list[4] = {0,2,5};
    adj_list[5] = {1,4};

   int src = 0;
   bfs(src);

   for(int i=0; i<nodes; i++){
    cout<<"node "<<i<<" -> level: "<<level_array[i]<<endl;
   }
   return 0;
}