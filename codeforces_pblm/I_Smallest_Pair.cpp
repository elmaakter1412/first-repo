//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }

        ll min_value = LONG_LONG_MAX;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                ll value = a[i] + a[j] + j - 1;
                if(value < min_value){
                    min_value = value;
                }

            }
        }
        cout<<min_value<<endl;
    }
    
    return 0;
}