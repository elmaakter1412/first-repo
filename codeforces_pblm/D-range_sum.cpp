//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll l,r, sum = 0;
        cin>>l>>r;
        sum = ((max(l,r) - min(l,r) + 1) * (l+r)) / 2;
        cout<<sum<<endl;

    }
    return 0;
}