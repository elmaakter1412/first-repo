//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
 ll triple(ll a[], ll n){
    map<ll,ll>frq;
    for(ll i=0; i<n; i++){
        frq[a[i]]++;
        if(frq[a[i]] >= 3){
            return a[i];
        }
    }
    return -1;
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n;
        cin>>n;

        ll a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll result = triple(a, n);
        cout<<result<<"\n";
    }
    return 0;
}