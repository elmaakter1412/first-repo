//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
bool is_valid(int cost){
    if(cost < 10000 || cost > 99999){
        return false;
    }
    return true;
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int n,x;
        cin>>n>>x;

        int cost = n * x;

        is_valid(cost);
        
        if(is_valid(cost)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}