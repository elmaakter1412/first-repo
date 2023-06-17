//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n,k;
    cin>>n>>k;
 
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
 
    for(ll i=0; i<n; i+=k){
        ll m;
        if(i+k >= n){
            m = *min_element(a.begin() + i, a.end());
        }
        else{
            m = *min_element(a.begin() + i, a.begin() + i+k);
        }
        cout<<m<<" ";
    }
    cout<<"\n";
 
    
    return 0;
}