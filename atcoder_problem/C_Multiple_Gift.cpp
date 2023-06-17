//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,k, count = 0;
    cin>>n>>k;

    while(n<=k){
        n += n;
        count++;
    }
    cout<<count<<endl;
    
    return 0;
}