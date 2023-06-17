//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, x;
    cin>>n>>x;

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<ll>a_value;
    for(int i=0; i<n; i++){
        if(a[i] != x){
            a_value.push_back(a[i]);
        }
    }
    ll m = a_value.size();
    for(int i=0; i<m; i++){
        cout<<a_value[i];
        if(i != m-1){
            cout<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}