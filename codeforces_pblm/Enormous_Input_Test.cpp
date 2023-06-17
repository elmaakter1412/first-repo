//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,k;
    cin>>n>>k;

    ll count = 0;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;

        if(t%k == 0){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}