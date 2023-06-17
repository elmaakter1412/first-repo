//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n, count = 0;
        cin>>n;

        string s;
        cin>>s;

        map<char, int>icpc_ballon;
        for(char c: s){
            if(icpc_ballon[c] >=  1){
                count++;
                icpc_ballon[c]++;
            }
            else if(icpc_ballon[c] == 0){
                count = count + 2;
                icpc_ballon[c]++;
            }
        }
        cout<<count<<"\n";
    }
    
    return 0;
}