//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int number_of_pyanis(ll n, vector<ll>&a){
    map<ll, ll>mp;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }

    for(auto & pair: mp){
        if(pair.second == 1){
            return pair.first;
        }
    }
    return -1;
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case=1;
    //cin >> ts_case;
    
    while(ts_case--){

        ll n;
        cin>>n;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int result = number_of_pyanis(n,a);
        cout<<result<<"\n";
    }
    return 0;
}