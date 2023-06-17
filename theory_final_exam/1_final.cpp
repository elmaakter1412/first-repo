#include<bits/stdc++.h>
using namespace std;

int DFS(vector<vector<int>>& volume, int i, int j){
        int n = volume.size();
        int m = volume[0].size();

        int grid = volume[i][j];
        volume[i][j] = 0;

        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        for(int l=0; l<4; l++){
            int row = i + dx[l];
            int col = j + dy[l];

            if(row >= 0 && row < n && col >= 0 && col < m && volume[row][col]){
                grid += DFS(volume, row, col);
            }
        }
        return grid;

}

int the_lake_volume(vector<vector<int>> &volume){
    int n = volume.size();
    int m = volume[0].size();
    int the_largest_volume = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(volume[i][j] > 0){
                int grid = DFS(volume, i, j);
                the_largest_volume = max(the_largest_volume, grid);
            }
        }
    }
    return the_largest_volume;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>>volume(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>volume[i][j];
            }
        }

        int the_largest_volume = the_lake_volume(volume);
        cout<<the_largest_volume<<endl;
    }
    return 0;
    
}