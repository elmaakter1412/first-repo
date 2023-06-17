//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;

    ll mirror_array[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mirror_array[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=m-1; j>=0; j--){
            cout<<mirror_array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}