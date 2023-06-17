#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int dp[N], ara[N];

int boredom(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return dp[1];
    }

    int ans1, ans2;
    ans1 = boredom(n - 2) + (n * dp[n]);
    ans2 = boredom(n - 1);

    int ans = max(ans1, ans2);
    return ans;
}

int main(){
    int n, maximum_point = 0;
    cin>>n;

    for(int i = 1; i <= n; i++){
        cin>>ara[i];
        dp[ara[i]]++;
        maximum_point = max(maximum_point, ara[i]);
    }

    cout<<boredom(maximum_point);
    return 0;
}