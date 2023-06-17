#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int N = 1007;

char grid[N][N];

int dp[N][N];

int grid_paths(int x, int y, int n){
    if(x == n && y == n){
        return 1;
    }

    if(grid[x][y] == '*'){
        return 0;
    }
    if(dp[x][y] != -1){
        return dp[x][y];
    }

    int ans = 0;
    if(x + 1 <= n){
        ans = grid_paths(x + 1, y, n) % mod;
    }
    if(y + 1 <= n){
        ans = (ans + grid_paths(x, y + 1, n)) % mod;
    }
    dp[x][y] = ans;
    return ans;

}

int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin>>grid[i][j];
            dp[i][j] = -1;
        }
    }

    cout<<grid_paths(1, 1, n)<<endl;
    return 0;
}