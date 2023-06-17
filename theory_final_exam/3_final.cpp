#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int coin_combination(int n, int m, vector<int>& coins){
    vector<int>dp(m+1, 0);
    dp[0] = 1;

    for(int i=1; i<=m; i++){
        for(int j=0; j<n; j++){
            if(i >= coins[j]){
                dp[i] = (dp[i] + dp[i-coins[j]]) % MOD;
            }
        }
    }
    return dp[m];
}

int main(){

    int n, m;
    cin>>n>>m;

    vector<int>coins(n);
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }

    int ways = coin_combination(n,m,coins);
    cout<<ways<<endl;
    return 0;


}