//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int lenOfLongSubarr(int a[], int n, int k){
    int sum = 0, ans = 0;

    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        sum = sum + a[i];
        if(sum == k){
            ans = max(ans, i+1);
        }
        if(mp.find(sum-k) != mp.end()){
            int idx = mp[sum-k];
            ans = max(ans, i-idx);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    return ans;
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    //cin >> ts_case;
    
    while(ts_case--){
        int n,k;
        cin>>n>>k;

        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int result = lenOfLongSubarr(a,n,k);
        return result;
    }
    return 0;
}