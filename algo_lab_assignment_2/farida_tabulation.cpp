#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

long long coins[N], dp[N];

int main(){
    int t;
    cin>>t;

    for(int i = 1; i <= t; i++){
        int n;
        cin>>n;

        for(int i = 1; i <= n; i++){
            dp[i] = -1;
        }

        for(int j = 0; j < n; j++){
            cin>>coins[j];
        }

        dp[0] = coins[0];
        dp[i] = max(coins[0], coins[1]);

        for(int j = 1; j <= n; j++){
            dp[j] = max(dp[j-1], dp[j-2] + coins[j]);
        }
        cout<<"Case "<<i<<": "<<dp[n-1]<<endl;
    }
    return 0;
}