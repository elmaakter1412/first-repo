//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll>v;
    
void result(){
    ll n;
    cin>>n;

    ll a[n];
    unordered_map<ll, ll>freq;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<v.size(); j++){
            ll k = a[i] ^ v[j];
            ans += freq[k];
        }
    }
    cout<<(ans+n)/2<<endl;
}



bool is_palindrome(ll val){
    string ans = to_string(val);
    string ans2 = ans;
    reverse(ans2.begin(), ans2.end());
    return ans == ans2;
}



    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(ll i=0; i<(1<<15); i++){
        if(is_palindrome(i)){
            v.push_back(i);
        }
    }
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}