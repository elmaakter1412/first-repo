//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, sum = 0;
    cin>>n;

    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum = sum + a[i];
    }

    if(sum % 2 == 0){
        cout<<sum<<endl;
    }
    else{
        sort(a,a+n);
        for(int i=0; i<n; i++){
            if((sum - a[i]) % 2 == 0){
                cout<<sum - a[i]<<endl;
                break;
            }
        }
    }

    
    return 0;
}