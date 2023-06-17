//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;
    map<int, int>mp;

    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        mp[m]++;

    }

    int p = mp.size();
    if((p % 2 == 0 && n % 2 == 0) || (p % 2 == 1 && n % 2 == 1)){
        cout<<p<<endl;
    }
    else{
        cout<<p-1<<endl;
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}