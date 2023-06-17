//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,q, sum = 0;
    cin>>n;

    vector<ll>a(n+1);
    vector<ll>v(n+5, 0);
    vector<ll>u(n+5, 0);

    for(int j=1; j<=n; j++){
        cin>>a[j];
        sum = sum + a[j];
        v[j] = sum;

    }

    sort(a.begin(), a.end());
    sum = 0;

    for(int j=1; j<=n; j++){
        sum = sum + a[j];
        u[j] = sum;
    }
    cin>>q;


    ll t,l,r;
    for(int i=1; i<=q; i++){
        cin>>t>>l>>r;
        if(t==1){
            cout<<v[r] - v[l-1]<<"\n";
        }
        else{
            cout<<u[r] - u[l-1]<<"\n";
        }

    }

}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}