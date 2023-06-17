#include<bits/stdc++.h>
using namespace std;

const int N = 1002;

int n,m,count_room, max_length;
char wall[N][N];
int  visited[N][N];

void dfs(int i, int j, int &length){
    if(i<0 || i>=n || j<0 || j>=m || wall[i][j] == '#' || visited[i][j]){
        return;
    }
    visited[i][j] = true;
    length++;
    dfs(i+1, j, length);
    dfs(i-1, j, length);
    dfs(i, j+1, length);
    dfs(i, j-1, length);
}

int main(){
    cin>>n>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>wall[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(wall[i][j] == '.' && !visited[i][j]){
                int length = 0;
                dfs(i, j, length);
                count_room++;
                max_length = max(max_length, length);
            }
        }
    }
    cout<<"Rooms - "<<count_room<<endl;
    cout<<"Length of the longest room - "<<max_length<<endl;
    return 0;
}