#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int INF = 1e9;

int dp[N];

int main(){
    int n;
    cin>>n;

    dp[1] = 0;
    
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + 1;

        if(i%2 == 0){
        dp[i] = min(dp[i/2] + 1, dp[i]);
        }

        if(i%3 == 0){
            dp[i] = min(dp[i/3] + 1, dp[i]);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}