#include<bits/stdc++.h>
using namespace std;

/*
- state: dp(n, k) -> number of ways to make sum = k from coins 1 to n without crossing limit 
- recurrance: dp(n, k) = dp(n-1, k) + 
                         dp(n-1, k-1* coin[n]) +
                         dp(n-1, k-2* coin[n]) +
                         ........
                         dp(n-1, k- limit[n] * coin[n])
- base case: dp(0, 0) = 1
*/
const int N = 60;
const int M = 1001;
const int MOD = 100000007;

int dp[N][M];
int coin[N], limit[N];
int main(){
    int t, tst = 0;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        for(int i=1; i<=n; i++){
            cin>>coin[i];
        }
        for(int i=1; i<=n; i++){
            cin>>limit[i];
        }

        //1. handle base case
        dp[0][0] = 1;

        //2. loop over the states
        for(int i=1; i<=n; i++){
            for(int target=0; target<=k; target++){
                //2.1 calculate ans from smaller sub-problems
                /*                      
                - recurrance: dp(n, k) = dp(n-1, k) + 
                         dp(n-1, k-1* coin[n]) +
                         dp(n-1, k-2* coin[n]) +
                         ........
                         dp(n-1, k- limit[n] * coin[n])
                */

            }
        }

        cout<<"Case "<<++tst<<": "<<dp[n][k]<<endl;
    }
    return 0;


}