#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int N = 1007;

char grid[N][N];

int dp[N][N];

int grid_paths(int n){
    dp[1][1] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(grid[i][j] == '*'){
                continue;
            }
            if(i + 1 <= n){
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % mod;
            }
            if(j + 1 <= n){
                dp[i][j + 1] = (dp[i][j + 1] + dp[i][j]) % mod;
            }

        }
    }
    int ans = dp[n][n];
    return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin>>grid[i][j];
            dp[i][j] = 0;
        }
    }
    cout<<grid_paths(n)<<endl;
    return 0;
}