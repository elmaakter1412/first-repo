//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
ll result(ll n){
    if(n==0 || n==1){
        return 1;
    }
    return n * result(n-1);
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n;
        cin>>n;
        ll factorial = result(n);
        cout<<factorial<<endl;
    }
    return 0;
}