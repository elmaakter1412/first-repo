#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<int>chocolate(n);
    for(int i=0; i<n; i++){
        cin>>chocolate[i];
    }

    vector<int>weight(n);
    for(int i=0; i<n; i++){
        cin>>weight[i];
    }

    vector<int>DP(k+1, 0);

    for(int i=0; i<n; i++){
        for(int j=weight[i]; j<=k; j++){
            DP[j] = max(DP[j - weight[i]] + chocolate[i], DP[j]);
        }
    }
    cout<<DP[k]<<endl;
    return 0;
}