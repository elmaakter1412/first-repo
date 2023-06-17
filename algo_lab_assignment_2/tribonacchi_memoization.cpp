#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

int dp[N];

int tribonacchi(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    
    if(dp[n] != -1){
            return dp[n];
        }
        
        int ans = tribonacchi(n-1) + tribonacchi(n-2) + tribonacchi(n-3);
        dp[n] = ans;
        return ans;

    }
int main(){

    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        dp[i] = -1;
    }
    cout<<tribonacchi(n)<<endl;
    return 0;


}