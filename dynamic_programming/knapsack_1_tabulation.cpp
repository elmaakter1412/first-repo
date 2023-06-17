#include<bits/stdc++.h>
using namespace std;
const int N = 102;
const int M = 1e5 + 5;


/*
1.state: knapsacp(n, cap) -> maximum profit considering objects 1 to n ans capacity cap
2. recurrance: 
    knapsack(n, cap) -> max{
                            val[n] + knapsack(n-1,cap-wt[n]), 
                            knapsack(n-1, cap)
                        }
3. base case: knapsack(0, x) = 0
*/

long long dp[N][M];
int wt[N], value[N];


int main(){
    int n,w;
    cin>>n>>w;

    for(int i = 1; i <= n; i++){
        cin>>wt[i]>>value[i];
    }

    //1. handle base case
    for(int i = 0; i <= w; i++){
        dp[0][i] = 0;
    }

    //2. loop over the states 
    for(int i = 1; i <= n; i++){
        for(int cap = 0; cap <= w; cap++){
            //2.1 calculate result from samller sub-problems
            
            if(cap < wt[i]){
                dp[i][cap] = dp[i - 1][cap];
            }
            else{
                dp[i][cap] = max(
                    value[i] + dp[i - 1][cap - wt[i]],
                    dp[i-1][cap]
                    );
            }
        }
    }
    cout<<dp[n][w]<<endl;
    return 0;
}
