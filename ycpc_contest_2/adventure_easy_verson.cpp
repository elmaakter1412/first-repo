#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;
const int MAXW = 1000;

int N, W;
int w[MAXN+1], v[MAXN+1];
int dp[MAXN+1][MAXW+1];

int main() {
    cin >> N >> W;
    for (int i = 1; i <= N; i++) {
        cin >> w[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> v[i];
    }

    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= W; j++) {
            if (j >= w[i]) {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout<<dp[N][W]<<endl;

    return 0;
}
