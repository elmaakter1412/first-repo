#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int dp[N];

int perfect_squares(int n){
    if(n == 0){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }
    int ans = INT_MAX;
    for(int i = 1; i*i <= n; i++){
        ans = min(ans, perfect_squares(n - i*i) + 1);
    }
    dp[n] = ans;
    return ans;
}

int main(){
    int n;
    cin>>n;

    for(int i = 0; i<=n; i++){
        dp[i] = -1;
    }

    int ans = perfect_squares(n);
    cout<<ans<<endl;
    return 0;
}