#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

    int dp[N];

    int fibonacchi(int n){
        if(n<=2){
            return 1;
        }

        if(dp[n] != -1){
            return dp[n];
        }
        
        int ans = fibonacchi(n-1) + fibonacchi(n-2);
        dp[n] = ans;
        return ans;

    }

int main(){

    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        dp[i] = -1;
    }
    cout<<fibonacchi(n)<<endl;
    return 0;


}