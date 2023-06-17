//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
     vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    ll q;
    cin>>q;
    while(q--){
        ll i,j, s = 0;
        cin>>i>>j;

        for(int p=i; p<=j; p++){
            s = s + a[p];


        }
        cout<<s<<"\n";
    }
    

    return 0;
}