//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int longestSubarrayWithSumK(vector<int>a, long long k){
    int n = a.size();
    int i=0, j=0;
    long long sum = 0;
    int ans = 0;

    while(j < n){
        sum = sum + a[j];
        if(sum > k){
            while(sum > k){
                sum = sum - a[i];
                i++;
            }
        }

        if(sum == k){
            ans = max(ans, j-i+1);
        }

        j++;

    }
    return ans;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case;
    //cin >> ts_case;
    
    while(ts_case--){
        int n, k;
        cin>>n>>k;

        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int result = longestSubarrayWithSumK(a,k);
        cout<<result<<"\n";
    }
    return 0;
}