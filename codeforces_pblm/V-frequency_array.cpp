//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }
    for(int i=1; i<=m; i++){
        cout<<mp[i]<<endl;
    }
    return 0;
}