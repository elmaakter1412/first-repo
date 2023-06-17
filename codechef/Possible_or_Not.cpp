//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
string subsequence(ll n, vector<ll>&a, ll trgt){ 
    ll bitwiseAND = trgt;

    for(ll i=1; i<n; i++){
        bitwiseAND &= a[i];

        if(bitwiseAND == trgt){
            return "YES";
        }
    }
    return "NO";
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n, trgt;
        cin>>n>>trgt;

        vector<ll>a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }


       string result = subsequence(n,a,trgt);
       cout<<result<<"\n";
    }
    return 0;
}