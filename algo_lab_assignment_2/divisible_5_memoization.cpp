#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int INF = 1e9;

int dp[N];

int result(int n){
    if(n == 1){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int ans = INF;
    if(n%2 == 0){
        ans = min(ans, result(n/2) + 1);
    }
    if(n%3 == 0){
        ans = min(ans, result(n/3) + 1);
    }
    ans = min(ans, result(n-1) + 1);
    dp[n] = ans;
    return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        dp[i] = -1;
    }
    cout<<result(n)<<endl;
    return 0;
}