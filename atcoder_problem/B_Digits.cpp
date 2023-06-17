//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin>>n>>k;

    ll digit = (int)(floor(log(n) / log(k) + 1));
    cout<<digit<<"\n";
    
    return 0;
}