#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

long long coins[N], dp[N];

long long result(int n){
    if(n < 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int ans = max(result(n-1), result(n-2) + coins[n]);
    dp[n] = ans;
    return ans;

}

int main(){
    int t;
    cin>>t;

    for(int i = 1; i <= t; i++){
        int n;
        cin>>n;
        for(int i = 0; i < n; i++){
            dp[i] = -1;
        }
        for(int j = 0; j < n; j++){
            cin>>coins[j];
        }

        cout<<"Case "<<i<<": "<<result(n-1)<<endl;
    }
    return 0;
}