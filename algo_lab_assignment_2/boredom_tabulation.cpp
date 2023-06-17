#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int dp[N], ara[N];

int boredom(int n){
  dp[0] = 0;
  dp[1] = dp[1];

  for(int i = 2; i <= n; i++) {
    dp[i] = max(dp[i-1], dp[i-2] + (i * dp[i]));
  }
  int ans = dp[n];
  return ans;
}

int main() {
  int n, maximum_points = 0;
  cin>>n;

  for (int i = 0; i < n; i++) {
    cin>>ara[i];
    dp[ara[i]]++;
    maximum_points = max(maximum_points, ara[i]);
  }
  cout<<boredom(maximum_points);
  return 0;
}
