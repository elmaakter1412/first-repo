//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
ll count_participants(ll a, ll b, ll c, ll d){

    ll count = 0;
    if(b > a){
        count++;
    }
    if(c > a){
        count++;
    }
    if(d > a){
        count++;
    }
    return count;
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){

         ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll result = count_participants(a,b,c,d);
        cout<<result<<"\n";
    }
    return 0;
}