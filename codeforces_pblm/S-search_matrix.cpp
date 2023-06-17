//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == x){
                cout<<"will not take number"<<"\n";
                return 0;
            }
        }
    }
    cout<<"will take number"<<"\n";
    
    
    return 0;
}