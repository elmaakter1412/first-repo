//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin>>n>>k;

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    ll maximum_sum = 0;

    if(a[n-1] < 0){
        cout<<0<<endl;
        return 0;
    }

    for(int i=n-1; i>=n-k; i--){
        if(a[i] < 0){
            break;
        }
        maximum_sum = maximum_sum + a[i];
    }
    cout<<maximum_sum<<endl;
    return 0;
}