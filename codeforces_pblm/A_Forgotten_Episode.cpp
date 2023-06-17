//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;

    vector<ll>a(n-1);
    for(ll i=0; i<n-1; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    ll miss_epi = 0;

    for(ll i=0; i<n-1; i++){
        if(a[i] != i+1){
            miss_epi = i+1;
            break;
        }
    }

    if(miss_epi == 0){
        miss_epi = n;
    }
    cout<<miss_epi<<endl;


    
    return 0;
}